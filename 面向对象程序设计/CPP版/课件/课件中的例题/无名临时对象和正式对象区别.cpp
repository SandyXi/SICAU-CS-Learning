//������ʱ�������ʽ���������
//#include<iostream.h>
#include<iostream>
using namespace std;
//����Ԫ��������غ������и�������
class Complex
{
	double real,imag;
public:
     Complex(double r,double i) //�����������캯��
     {
		 real=r;
		 imag=i;
		 cout<<"���ù��캯��Complex(double r=0.0,double i=0.0)"<<endl;
	 }
     Complex() //�޲ι��캯��
     {
		 real=0.0;
		 imag=0.0;
		 cout<<"�����޲ι��캯��Complex()"<<endl;
	 }
	 Complex(Complex &a) //�������캯��
     {    //��������µ��ÿ������캯����1��һ�������ʼ����һ������2������������������ʵ�δ����γ�ʱ��3������һ������
		 real=a.real;
		 imag=a.imag;
		 cout<<"���ÿ������캯��Complex(Complex &a)"<<endl;
	 }
     ~Complex() //��������
     {
		 cout<<"������������"<<endl;
	 }
	 friend Complex& operator+(Complex &a,Complex &b); //����"��"�����������
	 friend Complex operator-(Complex &a,Complex &b);//����"-"�����������
	 void print() ;
	 Complex &operator=(Complex &a)
	 {
	     real=a.real;
	     imag=a.imag;
	     cout<<"void operator=(Complex &a)"<<endl;
	     return *this;
	 }
};

Complex& operator+(Complex &a,Complex &b) //����"��"�������ʵ��
{
	Complex  temp;
	temp.real=a.real+b.real;
	temp.imag=a.imag+b.imag;
	return  temp;    //������ʽ�������
}

Complex operator-(Complex &a,Complex &b) //����"��"�������ʵ��
{
    a.real=a.real+b.real;
    a.imag=a.imag+b.imag;
	return  a;  //����������ʱ����
	//return Complex(a.real+b.real,a.imag+b.imag);
}

void Complex::print()
{
	cout<<real;
	if(imag>0)cout<<"+"<<imag<<"i"<<endl;
	if(imag<0)cout<<imag<<"i"<<endl;
}

int main()
{
	Complex A1(2.3,4.6),A2(3.6,4.8),A3,A4;
	cout<<"�������A1��A2:"<<endl;
	cout<<"A1=";
	A1.print(); //�������A1
	cout<<endl<<"A2=";
	A2.print(); //�������A2
	A3=A1;
	A3.print();
	cout<<endl<<"----��������----"<<endl;
	A3=A1+A2; //�ȼ���A3=A1.operator+(A2); //�������
	cout<<"A1+A2=";
	A3.print(); //���������ӵĽ��A3
	cout<<endl;

	//A4=A1-A2; //�ȼ���A4= A1.operator-(A2);	//�������
	(A1-A2).print();
	cout<<"A1-A2=";
	A4.print(); //�����������Ľ��A4
	cout<<endl;
    return 0;
}


