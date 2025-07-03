//例3.26  调用缺省的拷贝构造函数。
#include<iostream>
using namespace std;
class Point
{
public:
	Point(int a=0,int b=0)
	{
		x=a;
		y=b;
		cout<<"调用Point(int a=0,int b=0)函数"<<endl;
	}
	Point(Point &ob)
	{
		x=ob.x;
		y=ob.y;
		cout<<"调用Point(Point &ob)函数"<<endl;
	}
	void set(int m,int n)
	{
	    x=m;
	    y=n;
	}
	void print()
	{
		cout<<x<<"  "<<y<<endl;
	}

	Point& operator=(const Point &s)
	{
		if(this==&s)return *this;  //防止s=s的赋值
		x=10*s.x;
		y=10*s.y;
		cout<<"调用Point& Point::operator=(const Point &s)函数"<<endl;
		return *this;
	}
private:
	int x,y;
};

/*
Point fun(Point a) //对象作为函数参数、函数返回值
{

    a.set(100,50);
    a.print();
    return a;
}

Point& fun(Point &a)  //对象引用作为函数参数、函数返回值
{

    a.set(100,50);
    a.print();
    return a;
}*/

Point* fun(Point *a) //对象指针作为函数参数、函数返回值
{

    a->set(100,50);
    a->print();
    return a;
}

int main()
{
	Point p1(30,40);
	//Point p2(p1);
	 p1.print();
	 //p2.print();
	 /*Point p3=p1;
	 p1.print();
	 p3.print();
	 Point p4;
	 p4.print();
	 p4=p1;
	 p4.print();
	 */
	 //p2=fun(p1);
     //p1.print();
	 //p2.print();
     Point *p;
	 p=fun(&p1);
	 p->print();
     return 0;
}
