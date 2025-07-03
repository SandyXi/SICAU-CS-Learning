//例3.12 带默认参数的构造函数
#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
public:
	Complex(double r=0.0,double i=0.0);	//带默认参数构造函数	
	double abscomplex();
private:
	double real;
	double imag;
};

Complex::Complex(double r,double i)
{
	real=r;
	imag=i;
}
double Complex::abscomplex()
{
	double t;
	t=real*real+imag*imag;
	return sqrt(t);
}

int main()
{
	Complex s1;  //不带实参，取默认参数
	cout<<"复数1的绝对值是："<<s1.abscomplex()<<endl;

    Complex s2(3.0);  //不带实参，取默认参数
    cout<<"复数2的绝对值是："<<s2.abscomplex()<<endl;

    Complex s3(3.0,4.0);
    cout<<"复数3的绝对值是："<<s3.abscomplex()<<endl;
    return 0;
}
