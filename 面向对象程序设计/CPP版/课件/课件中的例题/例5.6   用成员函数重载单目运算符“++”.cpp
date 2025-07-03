//例5.4  使用友元函数重载单目运算符"++"和"--"
#include<iostream>
using namespace std;

class Coord
{	
public:
	Coord(int i=0,int j=0)
	{
		x=i;
		y=j;
	}
	Coord operator ++(); //重载自增运算符
	Coord operator --(); //重载自减运算符
	void print(); //输出x,y值
private:
	int x,y;
};

Coord Coord::operator ++()
{
	++x;
	++y;
	return *this; //返回当前对象的值
}

Coord Coord::operator --()
{
	--x;
	--y;
	return *this;
}

void Coord::print()
{
	cout<<"x:"<<x<<"  ,y:"<<y<<endl;
}

void main()
{
	Coord ob(10,20);
	ob.print(); 
	++ob;   // operator ++(ob);
	ob.print();
	--ob;
	ob.print();
}