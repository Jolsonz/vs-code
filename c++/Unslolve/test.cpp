#include<stdio.h>
#include<windows.h>
int main()
{
    HANDLE hOut;
    COORD pos={15,5};
    hOut=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hOut,pos);
     
    SetConsoleTextAttribute(hOut,0x01|0x05);
     
    printf("HelloWorld!\n");
    return 0;
}