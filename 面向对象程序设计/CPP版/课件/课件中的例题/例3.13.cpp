#include<iostream>
#include<cmath>
using namespace std;
class Complex{
public:
	Complex(double r=0.0,double i=0.0);//�������캯��
	~Complex();//������������
	double abscomplex();
private:
	double real;
	double imag;
};
Complex::Complex(double r,double i)   //���幹�캯��
{   
	real=r;
    imag=i;
	cout<<"Constructor called."<<endl;  //��ʾ���캯�������õ���Ϣ
}
Complex::~Complex()     //������������
{
	cout<<"Destructor called."<<endl;   //��ʾ�������������õ���Ϣ
}

double Complex::abscomplex()
{   
	double t;
    t=real*real+imag*imag;
    return sqrt(t);
}
int main()
{   Complex A(1.1,2.2);
    cout<<"�����ľ���ֵ�ǣ�"<<A.abscomplex()<<endl;
    return 0;
}

