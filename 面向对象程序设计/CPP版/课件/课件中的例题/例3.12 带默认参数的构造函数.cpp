//��3.12 ��Ĭ�ϲ����Ĺ��캯��
#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
public:
	Complex(double r=0.0,double i=0.0);	//��Ĭ�ϲ������캯��	
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
	Complex s1;  //����ʵ�Σ�ȡĬ�ϲ���
	cout<<"����1�ľ���ֵ�ǣ�"<<s1.abscomplex()<<endl;

    Complex s2(3.0);  //����ʵ�Σ�ȡĬ�ϲ���
    cout<<"����2�ľ���ֵ�ǣ�"<<s2.abscomplex()<<endl;

    Complex s3(3.0,4.0);
    cout<<"����3�ľ���ֵ�ǣ�"<<s3.abscomplex()<<endl;
    return 0;
}
