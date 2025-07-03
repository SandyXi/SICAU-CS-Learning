//例5.26  虚函数与重载函数关系
#include<iostream>
using namespace std;

class Base //基类
{
public:
	virtual void func1();
	virtual void func2();
	virtual void func3();
	void func4();
};

class Derived:public Base  //派生类
{
public:
	virtual void func1();//func1是虚函数，这里可以不写virtual
	void func2(int x); //与基类中的func2作为普通函数重载，虚函数特性消失
	//char func3();//错误，因为与基类中的func3只有返回类型不同，应删去
	void func4();//与基类中的func4师普通函数重载，不是虚函数
};
void Base::func1()
{
	cout<<"--Base func1()--"<<endl;
}

void Base::func2()
{
	cout<<"--Base func2()--"<<endl;
}

void Base::func3()
{
	cout<<"--Base func3()--"<<endl;
}

void Base::func4()
{
	cout<<"--Base func4()--"<<endl;
}

void Derived::func1()
{
	cout<<"--Derived func1()--"<<endl;
}

void Derived::func2(int x)
{
	cout<<"--Derived func2()--"<<endl;
}

void Derived::func4()
{
	cout<<"--Derived func4()--"<<endl;
}

int main()
{
	Base *p;//基类指针
	Derived d2; //派生类对象
	p=&d2;

	p->func1(); //调用Derived::func1()
	p->func2();  //调用Base::func2()
	p->func4();   //调用Base::func4()
}
