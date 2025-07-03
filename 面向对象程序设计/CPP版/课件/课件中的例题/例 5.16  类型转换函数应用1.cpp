//例 5.16  类型转换函数应用1
#include<iostream>
using namespace std;

class Complex
{  
	double real,imag;
public:
     Complex(double r=0,double i=0) //两个参数构造函数
     { 
		 real=r; 
		 imag=i;
	 }
	 operator double()//类型转换函数
	 {
		 return real;
	 }
};



int  main()
{
	Complex com(2.2,4.4);//定义对象
	cout<<"Complex类的对象com转换成double型的数据为：";
	cout<<double(com)<<endl;//调用类型转换函数
	return 0;
}


