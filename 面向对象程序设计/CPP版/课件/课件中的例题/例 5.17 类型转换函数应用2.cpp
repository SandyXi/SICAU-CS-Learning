//例 5.17  类型转换函数应用2
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
	 operator int()//类型转换函数
	 {
		 return int(real);//转换为int类型
	 }
};



int  main()
{
	Complex com1(22.2,4.4);//定义对象
	cout<<"Complex类的对象com1转换成double型的数据为：";
	cout<<double(com1)<<endl;//调用类型转换函数

	Complex com2(66.6,4.4);//定义对象
	cout<<"Complex类的对象com2转换成int型的数据为：";
	cout<<int(com2)<<endl;//调用类型转换函数
	return 0;
}


