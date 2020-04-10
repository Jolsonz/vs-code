//我如果要修改，把东西全读到一个 vector<string> 里，然后修改指定的地方，然后重新写进去。
#include<bits/stdc++.h>
using namespace std;
void open_file(){
    ofstream fout;
    fout.open("D:\\123.txt",ios::out);//ios::out是清除原来的数据重新写入，ios::app是追加
    if(!fout.is_open()){
        cout<<"Error";
        exit(1);
    }
    string t;
    while(getline(cin,t))//一直输入。
        fout<<t<<endl;
    fout.close();
}

void change_file(){
    //把原文本每行读入ans中。
    ifstream fin("D:\\123.txt",ios::in);
    vector<string> ans;
    string t;
    while(getline(fin,t)){
        cout<<t<<endl;//输出改变前的。
        ans.push_back(t);
    }
    fin.close();
    //将ans中的内容修改后再写会原文本。\f
    ofstream fout("D:\\123.txt",ios::out);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            if(ans[i][j]==' '){
                int k=j;
                while(ans[i][k]==' ') k++;
                ans[i].erase(j+1,k-j-1);
            }
        }
        cout<<ans[i]<<endl;
        fout<<ans[i]<<endl;
    }
    fout.close();
}
void change_F2(){
    fstream f("D:\\123.txt",ios::in | ios::out);
    vector<string> ans;
    string t;
    while(getline(f,t)){
        cout<<t<<endl;//输出改变前的。
        ans.push_back(t);
    }
    f.open("D:\\123.txt",ios::out);//这句必须要加，如果同时支持读写的话，会出问题，要么是写不进去，要么是写出错。

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            if(ans[i][j]==' '){
                int k=j;
                while(ans[i][k]==' ') k++;
                ans[i].erase(j+1,k-j-1);
            }
        }
        cout<<ans[i]<<endl;
        f<<ans[i]<<endl;
    }
    f.close();
}

void count(){
    // 用来读字符数,单词个数，句子数
    // 先把文本读入
    // 注意，遇到一个'.'就算一个句子。
    int a=0,b=0,c=0;//分别存字符数,单词个数，句子数
    ifstream fin("D:\\123.txt",ios::in);
    string t;
    while(getline(fin,t)){
        a+=t.size();//简单粗暴
        for(int i=0;i<t.size();i++){
            if(t[i]==' '||t[i]=='.'){
                if(i!=0&&isalpha(t[i-1]))//如果前一位是字母，那么单词加1
                    b++;
            }
            if(t[i]=='.') c++;
        }
    }
    fin.close();
    cout<<"char number="<<a<<endl;
    cout<<"word number="<<b<<endl;
    cout<<"sentence number="<<c<<endl;
}


int main(){
    int n;
    cout<<"请输入：\n1.输入文本\n2.去除多余空格\n3.计算单词数目\n";
    while(cin>>n){
        switch (n)
        {
        case 1:
            getchar();//读入一个回车
            open_file();
            break;
        case 2:
            change_file();
            break;
        case 3:
            count();
            break;
        case 4:
            change_F2();//这是我特意写的个函数来测试fstream的性质的。
            //结果发现，最好不用同时用 ios::in | ios::out。容易出错。
            break;
        default:
            cout<<"请输入正确的值\n";
            break;
        }
    }
    return 0;
}