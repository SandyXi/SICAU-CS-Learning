//��3.26  ����ȱʡ�Ŀ������캯����
#include<iostream>
using namespace std;
class Point
{
public:
	Point(int a=0,int b=0)
	{
		x=a;
		y=b;
		cout<<"����Point(int a=0,int b=0)����"<<endl;
	}
	Point(Point &ob)
	{
		x=ob.x;
		y=ob.y;
		cout<<"����Point(Point &ob)����"<<endl;
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
		if(this==&s)return *this;  //��ֹs=s�ĸ�ֵ
		x=10*s.x;
		y=10*s.y;
		cout<<"����Point& Point::operator=(const Point &s)����"<<endl;
		return *this;
	}
private:
	int x,y;
};

/*
Point fun(Point a) //������Ϊ������������������ֵ
{

    a.set(100,50);
    a.print();
    return a;
}

Point& fun(Point &a)  //����������Ϊ������������������ֵ
{

    a.set(100,50);
    a.print();
    return a;
}*/

Point* fun(Point *a) //����ָ����Ϊ������������������ֵ
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
