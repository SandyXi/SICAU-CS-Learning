//例5.5  用成员运算符重载函数进行复数运算。

#include<iostream>
using namespace std;

class Complex
{
	double real,imag;
public:
     Complex(double r=0,double i=0) //构造函数
     {
		 real=r;
		 imag=i;
	 }
	 Complex operator+(Complex num); //重载"＋"运算符的声明
	 Complex operator-(Complex num); //重载"－"运算符的声明
	 Complex operator*(Complex num); //重载"*"运算符的声明
	 Complex operator/(Complex num); //重载"/"运算符的声明
	 void operator()(); //重载括号"()"运算符
};

Complex Complex::operator+(Complex num) //重载"＋"运算符的实现
{
	Complex  temp;
	temp.real=real+num.real;
	temp.imag=imag+num.imag;
	return  temp;
}

Complex Complex::operator-(Complex num) //重载"－"运算符的实现
{
	Complex  temp;
	temp.real=real-num.real;
	temp.imag=imag-num.imag;
	return  temp;
}

Complex Complex::operator*(Complex num) //重载"*"运算符的实现
{
	Complex  temp;
	temp.real=real*num.real-imag*num.imag;
	temp.imag=real*num.imag+imag*num.real;
	return  temp;
}

Complex Complex::operator/(Complex num) //重载"/"运算符的实现
{
	Complex  temp;
	double k;
	k=1/(num.real*num.real+num.imag*num.imag);
	temp.real=(real*num.real+imag*num.imag)*k;
	temp.imag=(num.real*imag-real*num.imag)*k;
	return  temp;
}

void Complex::operator()() //重载括号"()"运算符，用于输出复数的实部和虚部
{
	cout<<real;
	if(imag>0)cout<<"+"<<imag<<"i"<<endl;
	if(imag<0)cout<<imag<<"i"<<endl;
}

int  main()
{
	Complex A1(1,2),A2(3,4),A3,A4,A5,A6;
	A3=A1+A2; //等价于A3=A1.operator+(A2); //复数相加
	A4=A1-A2; //等价于A4= A1.operator-(A2);	//复数相减
	A5=A1*A2; //等价于A5= A1.operator*(A2);	//复数相乘
	A6=A1/A2; //等价于A6= A1.operator/(A2);  //复数相除

    cout<<"输出复数A1和A2:"<<endl;
	cout<<"A1=";
	A1(); //输出复数A1
	cout<<endl<<"A2=";
	A2(); //输出复数A2
	cout<<endl<<"----复数运算----"<<endl;

	cout<<"A1+A2=";
	A3(); //输出复数相加的结果A3
	cout<<endl;

	cout<<"A1-A2=";
	A4(); //输出复数相减的结果A4
	cout<<endl;

	cout<<"A1*A2=";
	A5(); //输出复数相乘的结果A5
	cout<<endl;

	cout<<"A1/A2=";
	A6(); //输出复数相除的结果A6
	cout<<endl;
	return 0;
}
