//��3.2�������������3.1�еĽṹ������
#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
	double real;
    double imag; 
public:    
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
    cout<<"�����ľ���ֵ�ǣ�"<<A.abscomplex()<<endl;
    return 0;
}
