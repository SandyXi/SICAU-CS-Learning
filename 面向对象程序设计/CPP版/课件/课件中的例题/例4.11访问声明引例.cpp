#include<iostream>
using namespace std;
/*
class A {     //声明基类
public:
	A(int x1)
	{
		x=x1;
	}
	void print()
	{
		cout<<"x="<<x<<endl;
	}
private:
	int x;
};
class B:private A{      //声明派生类
public:
	B(int x1,int y1):A(x1)
	{
		y=y1;
	}
	void print2()           //通过派生类B的函数print2调用基类A的函数print（）
	{
		print();   //调用基类的成员print()
	}
/*  1、同名成员：
    void print()           //在派生类B重新定义函数print（）
	{
		A::print();   //调用基类的成员print()
	}
	2、访问声明     （例4.12访问声明应用）
	A::print;    //访问声明，把基类的公有成员函数print调整为私有派生类的公有成员函数


private:
	int y;
};*/

class A {     //声明基类
public:
	A(int x1)
	{
		x=x1;
	}
	void print()
	{
		cout<<"x="<<x<<endl;
	}
private:
	int x;
};

class B:protected A{      //声明派生类
public:
	B(int x1,int y1):A(x1)
	{
		y=y1;
	}
/*	void print2()           //通过派生类B的函数print2调用基类A的函数print（）
	{
		print();   //调用基类的成员print()
	}
  1、同名成员：
    void print()           //在派生类B重新定义函数print（）
	{
		A::print();   //调用基类的成员print()
	}
	2、访问声明     （例4.12访问声明应用）
	A::print;    //访问声明，把基类的公有成员函数print调整为私有派生类的公有成员函数

*/
  using   A::print;
private:
	int y;
};


int main()
{
	B b(10,20);
	b.print();
	return 0;
}


