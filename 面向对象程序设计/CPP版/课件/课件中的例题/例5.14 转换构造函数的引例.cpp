//��5.14 ת�����캯��������
#include<iostream>
using namespace std;

class Complex
{  
	double real,imag;
public:
	Complex( ) //�޲ι��캯��
     { 
		 real=0; 
		 imag=0;
	 }
     Complex(double r,double i) //�����������캯��
     { 
		 real=r; 
		 imag=i;
	 }
	 friend Complex operator+(Complex &a,Complex &b); //������Ԫ��������غ��������������������Ҳ�������
	 
	 void print() ; 
};

Complex operator+(Complex &a,Complex &b) //������Ԫ��������غ���
{  
	 Complex temp;
	 temp.imag=a.imag+b.imag;
	 temp.real=a.real+b.real;
	 return temp;
}



void Complex::print() 
{
	cout<<real;
	if(imag>0)cout<<"+"<<imag<<"i"<<endl;
	if(imag<0)cout<<imag<<"i"<<endl;
}

int  main()
{
	Complex com1(1.1,2.2),com2(3.3,4.4),t1;
	t1=com1+com2;
	t1.print();

	Complex t2;
	t2=com1+7.8;  //�����
	t2.print();
	return 0;
}


