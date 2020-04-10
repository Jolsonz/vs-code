#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main ()
{ 
   string s;
   // 以写模式打开文件
   fstream File;
   File.open("afile.dat", ios::out  | ios::in | ios::ate);
   cout << "Writing to the file\n" << "What you wanna to write: "; 
   getline(cin,s);

   File >> s;
   cout<< s <<endl;

   File.close();

/*    
   // 以读模式打开文件
   ifstream infile; 
   infile.open("afile.dat"); 
   cout << "Reading from the file" << endl; 
   infile >> s; 
   // 在屏幕上写入数据
   cout << s << endl;
   // 再次从文件读取数据，并显示它
   infile >> s; 
   cout << s << endl; 
   // 关闭打开的文件
   infile.close(); */
   return 0;
}
