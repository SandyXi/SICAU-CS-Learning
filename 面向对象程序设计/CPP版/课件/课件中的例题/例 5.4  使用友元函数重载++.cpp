//��5.4  ʹ����Ԫ�������ص�Ŀ�����"++"��"--"
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
	friend Coord operator ++(Coord &op); //�������������
	friend Coord operator --(Coord &op); //�����Լ������
	void print(); //���x,yֵ
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

