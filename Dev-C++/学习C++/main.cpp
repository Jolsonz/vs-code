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
       cout<<"�ļ���ʧ�ܣ�"<<endl;
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

