//例2.1  两数相加
#include<iostream>
using namespace std;
int add(int a, int b);   // 函数原型声明
int main()         // 主函数
{   int x, y, sum;   // 定义三个整型变 量
	cout<<"请输入两个变量："<<endl;
	cin>>x;                         // 从键盘输入变量x的值
	cin>>y;                         // 从键盘输入变量y的值
	sum=add(x, y);            // 调用函数add,
	cout<<"和："<<sum<<endl;
	return  0 ;
}
int add (int a, int b)   //定义函数
{
	int c;
	c=a+b;
	return c;
}
