//�� 5.18  ת�����캯����������ת���������ۺ�Ӧ��
#include<iostream>
using namespace std;


class Complex
{  
	int real,imag;
public:
	Complex( ) //�޲ι��캯��
     { 
		 real=0; 
		 imag=0;
	 }
     Complex(int r,int i) //�����������캯��
     { 
		 real=r; 
		 imag=i;
	 }
	 Complex(int i)//����ת�����캯��
	 {
		 real=imag=i/2;
	 }
	 operator int()//����ת������
	 {
		 return real+imag;
	 }
	 void print()
	 {
		 cout<<"real:"<<real<<"\t"<<"imag:"<<imag<<endl;
	 }
};

int  main()
{
	Complex a1(1,2),a2(3,4);//�������
	Complex a3;
	a3=a1+a2;//���������ص�+�������û�У�Ȼ���ڽ������ת��Ϊ��������ӣ���󽫺�ת��Ϊ���󣬸�ֵ��a3

	a3.print();
	return 0;
}