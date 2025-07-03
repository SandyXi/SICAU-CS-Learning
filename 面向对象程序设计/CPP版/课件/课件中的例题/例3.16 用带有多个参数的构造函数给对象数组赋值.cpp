//例3.16 用带有多个参数的构造函数给对象数组赋值
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
	Complex com[3]={Complex(1.1,2.2),Complex(3.3,4.4),Complex(5.5,6.6)}; //调用两个参数构造函数
    cout<<"复数1的绝对值是："<<com[0].abscomplex()<<endl;
    cout<<"复数2的绝对值是："<<com[1].abscomplex()<<endl;
    cout<<"复数3的绝对值是："<<com[2].abscomplex()<<endl;
    return 0; 
}
