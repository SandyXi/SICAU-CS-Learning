/*
例7.7  本程序中，定义了一个基类CPoint类和派生类CRectangle类，
在派生类中重新定义了成员函数area()，程序如下：
*/
#include <iostream>
using namespace std;
class CPoint //定义基类
{
public:	
	double x,y;
	CPoint(double a,double b); //基类的构造函数
	double area(); //基类中的area()函数
};

CPoint::CPoint(double a,double b)
{
	x=a;
	y=b;
}

double CPoint::area()
{
	return 0.0;
}

class CRectangle:public CPoint  //定义派生类 
{
	double z;
public:
	CRectangle(double a,double b):CPoint(a,b) //派生类的构造函数
	{
		z=0.0;
	}
	double area(); //派生类中的area()函数，求矩形的面积
};

double CRectangle::area()
{
	z=x*y;
	return z;
}

void main()
{
	CPoint p1(3.8,6.7);
	CRectangle r1(5.6,9.9);

	q=&p1;  //基类对象指针q指向基类对象p1
	cout<<q->area()<<endl; //调用基类中的area()函数
	cout<<"---------------------"<<endl;

	CPoint &m=r1;
	cout<<m.area()<<endl; //调用基类中的area()函数

	CPoint *q;  //基类对象指针
	q=&r1;   //基类对象指针q指向派生类对象r1
	cout<<q->area()<<endl; //调用基类中的area()函数
	cout<<"---------------------"<<endl;
}

