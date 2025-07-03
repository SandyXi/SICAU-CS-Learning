#include<iostream.h>
//#include<iostream>
//using namespace std;
//用友元运算符重载函数进行复数运算
class Complex
{  
	double real,imag;
public:
     Complex(double r=0.0,double i=0.0) //构造函数
     { 
		 real=r; 
		 imag=i;
	 }
	 friend Complex operator+(Complex &a,Complex &b); //重载"＋"运算符的声明
	 void set(double x,double y);
	 void show( ); 
};

Complex operator+(Complex &a,Complex &b) //重载"＋"运算符的实现
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
	cout<<"输出复数c1和c2:"<<endl;
	cout<<"c1=";
	c1.show();
    cout<<endl<<"c2=";
	c2.show();

	cout<<endl<<"----复数运算----"<<endl;
	c3=c1+c2;  //复数相加
	cout<<"c1+c2=";
	c3.print(); //输出复数相加的结果c3
    return 0;
}


