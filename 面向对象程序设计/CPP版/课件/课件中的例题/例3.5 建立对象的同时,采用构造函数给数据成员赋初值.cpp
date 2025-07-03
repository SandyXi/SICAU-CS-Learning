//例3.5 建立对象的同时,采用构造函数给数据成员赋初值
#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
public:
	Complex(double r,double i)  //构造函数
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
	Complex A(3.0,4.0);
    cout<<"复数的绝对值是："<<A.abscomplex()<<endl;

	Complex *pa=new Complex(3.0,4.0);   //利用构造函数创建对象时,通过指针和new来实现
    cout<<"复数的绝对值是："<<pa->abscomplex()<<endl;
    delete pa;

    return 0;
}
