#include<iostream>
using namespace std;

int main()
{
    //整型：short(2)  int(4)  long(4)  long long(8)
    //可以利用sizeof求出数据类型占用内存大小
    //语法: sizeof(数据类型/变量)

    cout << "short占用内存为：" << sizeof(short) << endl;
    cout << "short占用内存为：" << sizeof(int) << endl;
    cout << "short占用内存为：" << sizeof(long) << endl;
    cout << "short占用内存为：" << sizeof(long long) << endl;


    system("pause");

    return 0;
}