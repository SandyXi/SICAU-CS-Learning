//��3.5 ���������ͬʱ,���ù��캯�������ݳ�Ա����ֵ
#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
public:
	Complex(double r,double i)  //���캯��
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
    cout<<"�����ľ���ֵ�ǣ�"<<A.abscomplex()<<endl;

	Complex *pa=new Complex(3.0,4.0);   //���ù��캯����������ʱ,ͨ��ָ���new��ʵ��
    cout<<"�����ľ���ֵ�ǣ�"<<pa->abscomplex()<<endl;
    delete pa;

    return 0;
}
