//例3.6 不带参数的构造函数
#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
public:
	Complex() //不带参数构造函数 
	{  
		real=0;
		imag=0;
	}
	Complex(double r,double i)  //带参数构造函数
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
private:
	double real;
	double imag;
};

int main()
{   
	Complex A1,A2(3.0,4.0);
    cout<<"复数的绝对值是："<<A1.abscomplex()<<"  "<<A2.abscomplex()<<endl;
    return 0;
}