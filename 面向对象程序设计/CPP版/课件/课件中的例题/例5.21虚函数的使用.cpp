/*
例5.21  将例5.19的程序修改一下，
将基类CPoint中的成员函数area()声明为虚函数，又增加一个从基类共有派生的派生类，
修改后的程序如下：
*/
#include <iostream>
using namespace std;

class CPoint //定义基类
{
public:
	double x,y;
	CPoint(double a,double b); //基类的构造函数
	//double area(); //基类中的area()函数
	virtual double area() //基类中的area()函数
	{
		return 0.0;
	}
};

CPoint::CPoint(double a,double b)
{
	x=a;
	y=b;
}

class CCircle:public CPoint  //定义第一个派生类
{
	double rad;
public:
	CCircle(double a,double b,double c):CPoint(a,b) //派生类的构造函数
	{
		rad=c;
	}
	virtual double area(); //派生类中的area()函数，求圆的面积
};

double CCircle::area()
{
	double s;
	s=3.14*rad*rad;
	return s;
}


class CRectangle:public CPoint  //定义第二个派生类
{
	double z;
public:
	CRectangle(double a,double b):CPoint(a,b) //派生类的构造函数
	{
		z=0.0;
	}
	virtual double area(); //派生类中的area()函数，求矩形的面积
};

double CRectangle::area()
{
	z=x*y;
	return z;
}

int  main()
{
	CCircle c1(3.1,8.5,9.4);
	CRectangle r1(5.6,9.9);


	CPoint *q;  //基类对象指针
	q=&c1;   //基类对象指针q指向派生类对象c1
	cout<<q->area()<<endl; //调用派生类CCircle中的area()函数
	cout<<q->CPoint::area()<<endl;  //静态编译
	cout<<"---------------------"<<endl;

	q=&r1;   //基类对象指针q指向派生类对象r1
	cout<<q->area()<<endl; //调用派生类CRectangle中的area()函数
	cout<<q->CPoint::area()<<endl;  //静态编译
	return 0;

}

