//�� 5.16  ����ת������Ӧ��1
#include<iostream>
using namespace std;

class Complex
{  
	double real,imag;
public:
     Complex(double r=0,double i=0) //�����������캯��
     { 
		 real=r; 
		 imag=i;
	 }
	 operator double()//����ת������
	 {
		 return real;
	 }
};



int  main()
{
	Complex com(2.2,4.4);//�������
	cout<<"Complex��Ķ���comת����double�͵�����Ϊ��";
	cout<<double(com)<<endl;//��������ת������
	return 0;
}


