//�� 5.17  ����ת������Ӧ��2
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
	 operator int()//����ת������
	 {
		 return int(real);//ת��Ϊint����
	 }
};



int  main()
{
	Complex com1(22.2,4.4);//�������
	cout<<"Complex��Ķ���com1ת����double�͵�����Ϊ��";
	cout<<double(com1)<<endl;//��������ת������

	Complex com2(66.6,4.4);//�������
	cout<<"Complex��Ķ���com2ת����int�͵�����Ϊ��";
	cout<<int(com2)<<endl;//��������ת������
	return 0;
}


