//例6.13 有删节号“..."的异常处理

#include <iostream>
using namespace std;

void func(int x)
{
	if(x)throw x;
}

int main()
{	
	try  //检查异常
	{
		func(5);
		cout<<"No here"<<endl;
	}
	catch(...) //捕获异常，异常类型为任何类型
	{
		cout<<"任何类型异常"<<endl;
	}
	return 0;
}

