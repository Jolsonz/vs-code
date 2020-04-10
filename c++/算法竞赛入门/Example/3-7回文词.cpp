/* 
isalpha(c) 判断c这个字符是不是字母
同样的还有idigit,isprint 在ctype.h头文件里

感觉不太可能考这个，只是挺有趣的，写到一半不太想写了，就跳了
话说回文这个概念倒是考的多
主要是判断 s[i]!=s[len-i-1]
 */

#include<stdio.h>
#include<string.h>
#include<ctype.h>

const char* rev = "A   3  HIL KJM O   2TUVWXY51SE Z  8 ";
const char* msg[]= {"not a palindrome","a regular palindrome","not a "}