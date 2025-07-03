//例6.12 有多个catch块的异常处理

#include <iostream>
using namespace std;

template<typename type>
void show(type a)
{
	try  //检查异常
	{
		throw a;
	}
	catch(int) //捕获异常，异常类型为int型
	{
		cout<<"异常发生！整数型！"<<endl;
	}
	catch(double) //捕获异常，异常类型为double型
	{
		cout<<"异常发生！双精度型！"<<endl;
	}
	catch(char) //捕获异常，异常类型为char型
	{
		cout<<"异常发生！字符型！"<<endl;
	}
	cout<<"end"<<endl;
}
int main()
{
/*	double a=2.5;
	try  //检查异常
	{
		throw a;
	}
	catch(int) //捕获异常，异常类型为int型
	{
		cout<<"异常发生！整数型！"<<endl;
	}
	catch(double) //捕获异常，异常类型为double型
	{
		cout<<"异常发生！双精度型！"<<endl;
	}
	cout<<"end"<<endl;
	*/
	int x;
	double y;
	char c;
	cout<<"输入整数："<<endl;
	cin>>x;
    show(x);

	cout<<"输入小数："<<endl;
	cin>>y;
    show(y);
	
	cout<<"输入字符："<<endl;
	cin>>c;
    show(c);
	return 0;
}
