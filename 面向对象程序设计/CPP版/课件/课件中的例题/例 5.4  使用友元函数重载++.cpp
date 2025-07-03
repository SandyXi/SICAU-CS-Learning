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
	friend Coord operator ++(Coord &op); //重载自增运算符
	friend Coord operator --(Coord &op); //重载自减运算符
	void print(); //输出x,y值
private:
	int x,y;
};

Coord operator ++(Coord &op)
{
	++op.x;
	++op.y;
	return op;
}

Coord operator --(Coord &op)
{
	--op.x;
	--op.y;
	return op;
}

void Coord::print()
{
	cout<<"x:"<<x<<"  ,y:"<<y<<endl;
}

void main()
{
	Coord ob(10,20);
	ob.print(); // operator ++(ob);
	++ob;
	ob.print();
	--ob;
	ob.print();
}

