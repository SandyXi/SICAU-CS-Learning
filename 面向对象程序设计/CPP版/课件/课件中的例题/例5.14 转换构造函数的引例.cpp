//例5.14 转换构造函数的引例
#include<iostream>
using namespace std;

class Complex
{  
	double real,imag;
public:
	Complex( ) //无参构造函数
     { 
		 real=0; 
		 imag=0;
	 }
     Complex(double r,double i) //两个参数构造函数
     { 
		 real=r; 
		 imag=i;
	 }
	 friend Complex operator+(Complex &a,Complex &b); //定义友元运算符重载函数，＋的左侧是类对象，右侧是整数
	 
	 void print() ; 
};

Complex operator+(Complex &a,Complex &b) //定义友元运算符重载函数
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
	t2=com1+7.8;  //错误的
	t2.print();
	return 0;
}


