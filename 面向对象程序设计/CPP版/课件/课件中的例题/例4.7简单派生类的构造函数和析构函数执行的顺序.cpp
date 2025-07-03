//例4.7简单派生类的构造函数和析构函数执行的顺序
#include <iostream>
using namespace std;
class A
{
public:
	A()
	{
		cout<<"Constructing A class"<<endl;
	}
	~A()
	{
		cout<<"Destructing A class"<<endl;	
	}    
};

class B:public A
{
public:
	B()
	{
		cout<<"Constructing B class"<<endl;	
	}
	~B()
	{
		cout<<"Destructing B class"<<endl;	
	}   
};
int main()
{ 
	B b;
	cout<<"main()程序执行完了！"<<endl;
	return 0;
}
