// ��ӲҪ��to_stirng��һ��
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m,k;
    while(cin>>n){
        m=n*n;
        string s = to_string(n);
        k=pow(10,s.size())+0.5;//�������ڣ���������10��ƽ�������99�������ס���������ô�ض��ˡ�
        // ����,devc++��֧��to_string��̫�����ˡ�
        if(m%k==n)
            cout<<"Yes!\n";
        else cout<<"No!\n";
    }
    return 0;
}
