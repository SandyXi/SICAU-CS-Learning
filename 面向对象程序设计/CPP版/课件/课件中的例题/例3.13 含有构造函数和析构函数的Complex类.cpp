//��3.13 ���й��캯��������������Complex��
#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
public:
	Complex(double r=0.0,double i=0.0);	//���캯��	
	double abscomplex();
	~Complex(); //��������
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
	cout<<"����1�ľ���ֵ�ǣ�"<<s1.abscomplex()<<endl;
	Complex s2(3.0);
	cout<<"����2�ľ���ֵ�ǣ�"<<s2.abscomplex()<<endl;
	Complex s3(3.0,4.0);
	cout<<"����3�ľ���ֵ�ǣ�"<<s3.abscomplex()<<endl;
	return 0;
}
