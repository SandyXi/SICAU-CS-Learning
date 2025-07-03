//例3.1用扩充的结构体类型求复数的绝对值
#include <iostream>
#include <cmath>
using namespace std;

struct Complex
{
    double real;
    double imag;
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
};

int main()
{    
	Complex A;
    A.init(3.0,4.0);
    cout<<"复数的绝对值是："<<A.abscomplex()<<endl;
    return 0;
}

