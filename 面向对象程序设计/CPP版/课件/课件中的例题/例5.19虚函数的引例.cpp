/*
��7.7  �������У�������һ������CPoint���������CRectangle�࣬
�������������¶����˳�Ա����area()���������£�
*/
#include <iostream>
using namespace std;
class CPoint //�������
{
public:	
	double x,y;
	CPoint(double a,double b); //����Ĺ��캯��
	double area(); //�����е�area()����
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

class CRectangle:public CPoint  //���������� 
{
	double z;
public:
	CRectangle(double a,double b):CPoint(a,b) //������Ĺ��캯��
	{
		z=0.0;
	}
	double area(); //�������е�area()����������ε����
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

	q=&p1;  //�������ָ��qָ��������p1
	cout<<q->area()<<endl; //���û����е�area()����
	cout<<"---------------------"<<endl;

	CPoint &m=r1;
	cout<<m.area()<<endl; //���û����е�area()����

	CPoint *q;  //�������ָ��
	q=&r1;   //�������ָ��qָ�����������r1
	cout<<q->area()<<endl; //���û����е�area()����
	cout<<"---------------------"<<endl;
}

