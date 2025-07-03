//例5.7 使用友元运算符重载函数解决对象与整数相加
#include<iostream.h>
//using namespace std;

class Complex
{  
	double real,imag;
public:
     Complex(double r=0.0,double i=0.0) //构造函数
     { 
		 real=r; 
		 imag=i;
	 }
	 friend Complex operator+(Complex a,int b); //定义友元运算符重载函数，＋的左侧是类对象，右侧是整数
	 friend Complex operator+(int a,Complex b); //定义友元运算符重载函数，＋的左侧是整数，右侧是类对象
	 void print() ; 
};

Complex operator+(Complex a,int b) //重载"＋"运算符的实现
{  
	return Complex(a.real+b,a.imag);
}

Complex operator+(int a,Complex b) //重载"－"运算符的实现
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


