// 到底买不买
// 卧槽，打表是个好方法
// 思路是用string，然后定义s1,s2，s1是实际上的，s2是想做的。
// 然后用一个迭代器指着s2，每个元素在s1中找，找到就删掉，找不到就把notfond++;
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    string::iterator it1,it2;
    int ans=s1.size()-s2.size();
    it1=s1.begin();it2=s2.begin();
    int notfond=0;
    while(it2!=s2.end()){
        it1=s1.begin();
        while (it1!=s1.end())
        {
            if(*it1==*it2){
                s1.erase(it1);//找到就在s1中删掉,然后跳出。
                if(it1==s1.end()) notfond--;
                /* 这里要减一，不然会导致后面输入
                216
                236
                输出 NO 2，实际上应输出NO 1;
                应为it1指到最后一个元素，并erase(it1)之后，it1==s1.end()
                会导致notfond多加一次，实际上是不应该加的。 */
                break;
            }
            it1++;
        }
        if(it1==s1.end()&&s1.begin()!=s1.end()) notfond++;//如果找到了末尾。
        it2++;
        if(s1.begin()==s1.end()){//证明s1中的东西删完了，故缺s2-s1个。
            notfond=-ans;
            break;
        }
    }
    
    if(notfond){
        cout<<"No "<<notfond;
    }
    else
    {
        cout<<"Yes "<<ans;
    }
    return 0;
}