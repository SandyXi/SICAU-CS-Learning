//例5.23  末使用和使用虚析构函数的差别
#include<iostream>
using namespace std;

class B //基类
{
public:
	//virtual  ~B()  //虚析构函数
	~B()  普通析构函数
	{
		cout<<"调用基类B的析构函数"<<endl;
	}
};

class D:public B  //派生类
{
public:
	~D()
	{
		cout<<"调用派生类D的析构函数"<<endl;
	}
};

int main()
{
	B *p;//基类指针
	p=new D; //基类指针指向无名派生类对象

	delete p;
	return 0;
}
