#include<bits/stdc++.h>
using namespace std;

int main()
{
    ofstream o("abc.txt",ios::out);
    string line;
    while (getline(cin,line))
    {
        o<<line<<endl;
        /* code */
    }
    o.close();
    return 0 ;
}
