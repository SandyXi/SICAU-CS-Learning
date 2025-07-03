//例5.1   两个Complex类对象相加的完整程序
#include<iostream>
using namespace std;
class  complex 
{
public:
	double  real,imag;
    complex(double r=0,double i=0)
    {    
		real=r; 
		imag=i;
	}    
 };

complex operator+(complex om1,complex om2)
{  
	complex  temp;
	temp.real=om1.real+om2.real;
	temp.imag=om1.imag+om2.imag;
	return  temp;       
}

int main()
{   
	complex  com1(1.1,2.2), com2(3.3,4.4), total1,total2;
	total1=operator+(com1,com2);//调用运算符重载函数operator+的第一种方式
	cout<<"real1="<<total1.real<<"  "<<"inag1="<<total1.imag<<endl;

	total2=com1+com2;//调用运算符重载函数operator+的第二种方式
	cout<<"real2="<<total2.real<<"  "<<"inag2="<<total2.imag<<endl;
	return 0;
} 
