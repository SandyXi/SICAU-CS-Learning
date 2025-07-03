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
	void print()
	{
		cout<<x<<"  "<<y<<endl;
	}

	Point& operator=(const Point &s)
	{
		if(this==&s)return *this;  //��ֹs=s�ĸ�ֵ
		x=s.x;
		y=s.y;
		cout<<"����Point& Point::operator=(const Point &s)����"<<endl;
		return *this;
	}
private:
	int x,y;
};
int main()
{
	Point p1(30,40);
	Point p2(p1);
	 p1.print();
	 p2.print();
	 Point p3=p1;
	 p1.print();
	 p3.print();
	 Point p4;
	 p4.print();
	 p4=p1;
	 p4.print();
     return 0;
}
