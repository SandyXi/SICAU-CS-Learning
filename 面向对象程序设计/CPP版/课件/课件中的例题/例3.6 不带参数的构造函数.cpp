//��3.6 ���������Ĺ��캯��
#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
public:
	Complex() //�����������캯�� 
	{  
		real=0;
		imag=0;
	}
	Complex(double r,double i)  //���������캯��
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
    cout<<"�����ľ���ֵ�ǣ�"<<A1.abscomplex()<<"  "<<A2.abscomplex()<<endl;
    return 0;
}