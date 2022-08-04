#include<iostream>
#include<string>
using namespace std;

int main()
{
    //C语言风格的字符串
    //注意事项 char 字符串名 []
    //注意事项 等号后面要用双引号 包含起来字符串
    char str[] = "hello world";
    cout << str << endl;
    
    //C++风格的字符串
    //包含一个头文件 #include<string>
    string str2 = "hello world";
    cout << str2 << endl;

}