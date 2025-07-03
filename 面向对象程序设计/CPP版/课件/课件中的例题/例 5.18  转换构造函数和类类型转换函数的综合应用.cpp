//例 5.18  转换构造函数和类类型转换函数的综合应用
#include<iostream>
using namespace std;


class Complex
{  
	int real,imag;
public:
	Complex( ) //无参构造函数
     { 
		 real=0; 
		 imag=0;
	 }
     Complex(int r,int i) //两个参数构造函数
     { 
		 real=r; 
		 imag=i;
	 }
	 Complex(int i)//定义转换构造函数
	 {
		 real=imag=i/2;
	 }
	 operator int()//类型转换函数
	 {
		 return real+imag;
	 }
	 void print()
	 {
		 cout<<"real:"<<real<<"\t"<<"imag:"<<imag<<endl;
	 }
};

int  main()
{
	Complex a1(1,2),a2(3,4);//定义对象
	Complex a3;
	a3=a1+a2;//首先找重载的+运算符，没有；然后在将类对象转换为整数，相加；最后将和转换为对象，赋值给a3

	a3.print();
	return 0;
}