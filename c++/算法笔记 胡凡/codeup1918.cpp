// 简单计算器
// 思路是，先将中缀表达式转后缀。
#include<bits/stdc++.h>
using namespace std;

struct node {
    double num;//操作数
    char op;//操作符
    bool flag;//true表示操作数，false表示操作符
};

string str;
stack<node> s;//操作符栈
queue<node> q;//后缀表达式队列
map<char,int> op;//映射优先级

void change(){//中缀转后缀
    double num;
    node temp;
    for(int i=0;i<str.length();){
        if(isdigit(str[i])){//是数字,得放入队列
            temp.flag=true;//标记成数字
            temp.num = str[i++]-'0';//记录这个操作数的第一个数位,然后往下
            while(i<str.size()&&isdigit(str[i])){
                temp.num=temp.num*10+(str[i]-'0');
                i++;
            }//这里用stod也可以，但是i的位置难的找
            q.push(temp);//将这个操作数压入队列
        }
        else{//是操作符
            temp.flag=false;
            // 只要操作符栈的栈顶元素比该操作符优先级高或相等，就弹出到后缀表达式队列里
            while(!s.empty()&&op[str[i]]<=op[s.top().op]){
                q.push(s.top());
                s.pop();
            }
            temp.op = str[i];
            s.push(temp);
            i++;

        }
        
        
    }
    //扫描完后，操作符栈里还有，就全部弹出
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }

}

double cal(){//计算后缀表达式
    double temp1,temp2;
    node cur , temp;
    while(!q.empty()){//只要后缀表达式不空
        //注意经过上一步中缀转后缀，s栈是空了的，可以拿来计算
        cur = q.front();//cur记录队首元素
        q.pop();
        if(cur.flag == true) s.push(cur);//操作数直接压入栈
        else{//如果是操作符
            temp2=s.top().num;//先弹出的在后面，是第二个数
            s.pop();
            temp1=s.top().num;
            s.pop();
            temp.flag=true;//临时记录该操作数，还要压入s的。
            switch (cur.op)
            {
            case '+':
                temp.num=temp1+temp2;
                break;
            case '-':
                temp.num=temp1-temp2;
                break;
            case '*':
                temp.num=temp1*temp2;
                break;
            case '/':
                temp.num=temp1/temp2;
                break;
            default:
                break;
            }
            s.push(temp);//把该操作数压入栈
        }
    }
    return s.top().num;//最后返回栈顶元素的值
}

int main() {
    op['+']=op['-']=1;//优先级
    op['*']=op['/']=2;//乘除的优先级高
    while (getline(cin,str),str != "0")
    //括号内加逗号的表达式属于逗号表达式，逗号表达式的规则是从左往右依次执行语句，并返回最后一个语句的结果，如果计算到最后最后一个表达式的值为真，则整个逗号表达式为真，否则为假。 
    {
        for(auto it=str.end();it!=str.begin();it--){
            if(*it==' ') str.erase(it);//去掉表达式里所有的空格
        }
        while(!s.empty()) s.pop();//初始化栈
        change();
        printf("%.2f\n",cal());
    }
    return 0;
}