#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
  fstream f;
  f.open("afile.dat", ios::in);
  if(!f)
  {
       cout<<"文件打开失败！"<<endl;
       exit(1);
  } 
  char str[50];
  f.getline(str,50);
  cout<<str<<endl;
  f.getline(str,50);
  cout<<str<<endl;
  f.close();
  return 0;  
}                    

