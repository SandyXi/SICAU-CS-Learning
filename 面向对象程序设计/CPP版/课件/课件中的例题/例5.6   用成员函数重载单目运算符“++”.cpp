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
	Coord operator ++(); //�������������
	Coord operator --(); //�����Լ������
	void print(); //���x,yֵ
private:
	int x,y;
};

Coord Coord::operator ++()
{
	++x;
	++y;
	return *this; //���ص�ǰ�����ֵ
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