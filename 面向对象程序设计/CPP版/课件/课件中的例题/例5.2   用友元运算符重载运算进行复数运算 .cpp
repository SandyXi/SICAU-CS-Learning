#include<iostream.h>
//#include<iostream>
//using namespace std;
//����Ԫ��������غ������и�������
class Complex
{  
	double real,imag;
public:
     Complex(double r=0.0,double i=0.0) //���캯��
     { 
		 real=r; 
		 imag=i;
	 }
	 friend Complex operator+(Complex &a,Complex &b); //����"��"�����������
	 void set(double x,double y);
	 void show( ); 
};

Complex operator+(Complex &a,Complex &b) //����"��"�������ʵ��
{  
	Complex  temp;
	temp.real=a.real+b.real;
	temp.imag=a.imag+b.imag;     
	return  temp;
}


void Complex::show() 
{
	 cout<<"("<<real<<","<<imag<<")"<<endl;
}

void Complex::set(double x,double y)
{
	real=x; 
	imag=y;
}
int main()
{
	Complex c1(2.5,3.7),c2,c3;
	c2.set(5.9,7.4);
	cout<<"�������c1��c2:"<<endl;
	cout<<"c1=";
	c1.show();
    cout<<endl<<"c2=";
	c2.show();

	cout<<endl<<"----��������----"<<endl;
	c3=c1+c2;  //�������
	cout<<"c1+c2=";
	c3.print(); //���������ӵĽ��c3
    return 0;
}


