/*
��5.21  ����5.19�ĳ����޸�һ�£�
������CPoint�еĳ�Ա����area()����Ϊ�麯����������һ���ӻ��๲�������������࣬
�޸ĺ�ĳ������£�
*/
#include <iostream>
using namespace std;

class CPoint //�������
{
public:
	double x,y;
	CPoint(double a,double b); //����Ĺ��캯��
	//double area(); //�����е�area()����
	virtual double area() //�����е�area()����
	{
		return 0.0;
	}
};

CPoint::CPoint(double a,double b)
{
	x=a;
	y=b;
}

class CCircle:public CPoint  //�����һ��������
{
	double rad;
public:
	CCircle(double a,double b,double c):CPoint(a,b) //������Ĺ��캯��
	{
		rad=c;
	}
	virtual double area(); //�������е�area()��������Բ�����
};

double CCircle::area()
{
	double s;
	s=3.14*rad*rad;
	return s;
}


class CRectangle:public CPoint  //����ڶ���������
{
	double z;
public:
	CRectangle(double a,double b):CPoint(a,b) //������Ĺ��캯��
	{
		z=0.0;
	}
	virtual double area(); //�������е�area()����������ε����
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


	CPoint *q;  //�������ָ��
	q=&c1;   //�������ָ��qָ�����������c1
	cout<<q->area()<<endl; //����������CCircle�е�area()����
	cout<<q->CPoint::area()<<endl;  //��̬����
	cout<<"---------------------"<<endl;

	q=&r1;   //�������ָ��qָ�����������r1
	cout<<q->area()<<endl; //����������CRectangle�е�area()����
	cout<<q->CPoint::area()<<endl;  //��̬����
	return 0;

}

