//��3.3 ���й��к�˽�г�Ա��Complex����
#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
private:   //˽�г�Ա
	double real;
	double imag;
public:   //���г�Ա
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
}; //�����complex��

int main()
{   
	Complex A;
    A.init(3.0,4.0);
    cout<<"�����ľ���ֵ�ǣ�"<<A.abscomplex()<<endl;
    return 0;
}
