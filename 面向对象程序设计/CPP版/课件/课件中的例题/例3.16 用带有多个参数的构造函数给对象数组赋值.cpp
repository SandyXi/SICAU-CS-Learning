//��3.16 �ô��ж�������Ĺ��캯�����������鸳ֵ
#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
public:
	Complex(double r=0.0,double i=0.0):real(r),imag(i)
	{   }
    ~Complex()
	{
		cout<<"Destructor called."<<endl;
	}		
    double abscomplex()
	{
		double t;
	    t=real*real+imag*imag;
	    return sqrt(t);
	}
private:
	double real, imag; 
};		

int main()
{ 
	Complex com[3]={Complex(1.1,2.2),Complex(3.3,4.4),Complex(5.5,6.6)}; //���������������캯��
    cout<<"����1�ľ���ֵ�ǣ�"<<com[0].abscomplex()<<endl;
    cout<<"����2�ľ���ֵ�ǣ�"<<com[1].abscomplex()<<endl;
    cout<<"����3�ľ���ֵ�ǣ�"<<com[2].abscomplex()<<endl;
    return 0; 
}
