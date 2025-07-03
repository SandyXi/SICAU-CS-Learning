//例6.11 处理除数为零的异常处理方法举例

#include <iostream>
using namespace std;

int diva(int x,int y);//函数div原型声明

int main()
{	
	try  //检查异常
	{
		cout<<"7/3="<<diva(7,3)<<endl;
		cout<<"5/0="<<diva(5,0)<<endl;
	}
	catch(int) //捕获异常，异常类型为int型
	{
		cout<<"除数为0，错误！"<<endl;
	}
	return 0;
}

int diva(int x,int y)
{	
	if (y==0)	
		throw y;  //抛出异常，当除数为0时抛出int型异常
	return x/y;  //当除数不为0时，返回值
}
