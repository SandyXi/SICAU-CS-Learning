//无名临时对象和正式对象的区别
//#include<iostream.h>
#include<iostream>
using namespace std;
//用友元运算符重载函数进行复数运算
class Complex
{
	double real,imag;
public:
     Complex(double r,double i) //两个参数构造函数
     {
		 real=r;
		 imag=i;
		 cout<<"调用构造函数Complex(double r=0.0,double i=0.0)"<<endl;
	 }
     Complex() //无参构造函数
     {
		 real=0.0;
		 imag=0.0;
		 cout<<"调用无参构造函数Complex()"<<endl;
	 }
	 Complex(Complex &a) //拷贝构造函数
     {    //三种情况下调用拷贝构造函数：1、一个对象初始化另一个对象；2、对象做函数参数，实参传给形成时；3、返回一个对象；
		 real=a.real;
		 imag=a.imag;
		 cout<<"调用拷贝构造函数Complex(Complex &a)"<<endl;
	 }
     ~Complex() //析构函数
     {
		 cout<<"调用析构函数"<<endl;
	 }
	 friend Complex& operator+(Complex &a,Complex &b); //重载"＋"运算符的声明
	 friend Complex operator-(Complex &a,Complex &b);//重载"-"运算符的声明
	 void print() ;
	 Complex &operator=(Complex &a)
	 {
	     real=a.real;
	     imag=a.imag;
	     cout<<"void operator=(Complex &a)"<<endl;
	     return *this;
	 }
};

Complex& operator+(Complex &a,Complex &b) //重载"＋"运算符的实现
{
	Complex  temp;
	temp.real=a.real+b.real;
	temp.imag=a.imag+b.imag;
	return  temp;    //返回正式的类对象
}

Complex operator-(Complex &a,Complex &b) //重载"－"运算符的实现
{
    a.real=a.real+b.real;
    a.imag=a.imag+b.imag;
	return  a;  //返回无名临时对象
	//return Complex(a.real+b.real,a.imag+b.imag);
}

void Complex::print()
{
	cout<<real;
	if(imag>0)cout<<"+"<<imag<<"i"<<endl;
	if(imag<0)cout<<imag<<"i"<<endl;
}

int main()
{
	Complex A1(2.3,4.6),A2(3.6,4.8),A3,A4;
	cout<<"输出复数A1和A2:"<<endl;
	cout<<"A1=";
	A1.print(); //输出复数A1
	cout<<endl<<"A2=";
	A2.print(); //输出复数A2
	A3=A1;
	A3.print();
	cout<<endl<<"----复数运算----"<<endl;
	A3=A1+A2; //等价于A3=A1.operator+(A2); //复数相加
	cout<<"A1+A2=";
	A3.print(); //输出复数相加的结果A3
	cout<<endl;

	//A4=A1-A2; //等价于A4= A1.operator-(A2);	//复数相减
	(A1-A2).print();
	cout<<"A1-A2=";
	A4.print(); //输出复数相减的结果A4
	cout<<endl;
    return 0;
}


