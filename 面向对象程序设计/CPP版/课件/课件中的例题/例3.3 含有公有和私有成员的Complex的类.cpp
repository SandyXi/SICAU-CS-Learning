//例3.3 含有公有和私有成员的Complex的类
#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
private:   //私有成员
	double real;
	double imag;
public:   //公有成员
	void init(double r,double i)
	{
		real=r;
		imag=i;
	}
	double abscomplex()
	{
		double t;
		t=real*real+imag*imag;
		return sqrt(t);
	}
}; //定义的complex类

int main()
{   
	Complex A;
    A.init(3.0,4.0);
    cout<<"复数的绝对值是："<<A.abscomplex()<<endl;
    return 0;
}
