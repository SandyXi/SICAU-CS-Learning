//��5.7 ʹ����Ԫ��������غ�������������������
#include<iostream.h>
//using namespace std;

class Complex
{  
	double real,imag;
public:
     Complex(double r=0.0,double i=0.0) //���캯��
     { 
		 real=r; 
		 imag=i;
	 }
	 friend Complex operator+(Complex a,int b); //������Ԫ��������غ��������������������Ҳ�������
	 friend Complex operator+(int a,Complex b); //������Ԫ��������غ���������������������Ҳ��������
	 void print() ; 
};

Complex operator+(Complex a,int b) //����"��"�������ʵ��
{  
	return Complex(a.real+b,a.imag);
}

Complex operator+(int a,Complex b) //����"��"�������ʵ��
{  
	return Complex(a+b.real,b.imag);
}


void Complex::print() 
{
	cout<<real;
	if(imag>0)cout<<"+"<<imag<<"i"<<endl;
	if(imag<0)cout<<imag<<"i"<<endl;
}

void main()
{
	Complex A1(2.3,4.6),A2,A3;
	cout<<"A1"<<endl;
	A1.print();
	A2=A1+10;
	cout<<"A2=A1+10"<<endl;
	A2.print();
	A3=20+A1;
	cout<<"A3=20+A1"<<endl;
	A3.print();
}


