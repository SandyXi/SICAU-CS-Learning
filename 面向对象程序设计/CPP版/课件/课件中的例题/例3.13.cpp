#include<iostream>
#include<cmath>
using namespace std;
class Complex{
public:
	Complex(double r=0.0,double i=0.0);//声明构造函数
	~Complex();//声明析构函数
	double abscomplex();
private:
	double real;
	double imag;
};
Complex::Complex(double r,double i)   //定义构造函数
{   
	real=r;
    imag=i;
	cout<<"Constructor called."<<endl;  //显示构造函数被调用的信息
}
Complex::~Complex()     //定义析构函数
{
	cout<<"Destructor called."<<endl;   //显示析构函数被调用的信息
}

double Complex::abscomplex()
{   
	double t;
    t=real*real+imag*imag;
    return sqrt(t);
}
int main()
{   Complex A(1.1,2.2);
    cout<<"复数的绝对值是："<<A.abscomplex()<<endl;
    return 0;
}

