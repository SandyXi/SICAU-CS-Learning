//例3.13 含有构造函数和析构函数的Complex类
#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
public:
	Complex(double r=0.0,double i=0.0);	//构造函数	
	double abscomplex();
	~Complex(); //析构函数
private:
	double real;
	double imag;
};

Complex::Complex(double r,double i)
{
	real=r;
	imag=i;
	cout<<"Constructor called."<<endl;

}
double Complex::abscomplex()
{
	double t;
	t=real*real+imag*imag;
	return sqrt(t);
}
Complex::~Complex()
{
	cout<<"Destructor called."<<endl;
}
int main()
{
	Complex s1;
	cout<<"复数1的绝对值是："<<s1.abscomplex()<<endl;
	Complex s2(3.0);
	cout<<"复数2的绝对值是："<<s2.abscomplex()<<endl;
	Complex s3(3.0,4.0);
	cout<<"复数3的绝对值是："<<s3.abscomplex()<<endl;
	return 0;
}
