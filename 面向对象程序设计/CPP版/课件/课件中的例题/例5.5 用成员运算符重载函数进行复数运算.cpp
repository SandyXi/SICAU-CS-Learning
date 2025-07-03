//��5.5  �ó�Ա��������غ������и������㡣

#include<iostream>
using namespace std;

class Complex
{
	double real,imag;
public:
     Complex(double r=0,double i=0) //���캯��
     {
		 real=r;
		 imag=i;
	 }
	 Complex operator+(Complex num); //����"��"�����������
	 Complex operator-(Complex num); //����"��"�����������
	 Complex operator*(Complex num); //����"*"�����������
	 Complex operator/(Complex num); //����"/"�����������
	 void operator()(); //��������"()"�����
};

Complex Complex::operator+(Complex num) //����"��"�������ʵ��
{
	Complex  temp;
	temp.real=real+num.real;
	temp.imag=imag+num.imag;
	return  temp;
}

Complex Complex::operator-(Complex num) //����"��"�������ʵ��
{
	Complex  temp;
	temp.real=real-num.real;
	temp.imag=imag-num.imag;
	return  temp;
}

Complex Complex::operator*(Complex num) //����"*"�������ʵ��
{
	Complex  temp;
	temp.real=real*num.real-imag*num.imag;
	temp.imag=real*num.imag+imag*num.real;
	return  temp;
}

Complex Complex::operator/(Complex num) //����"/"�������ʵ��
{
	Complex  temp;
	double k;
	k=1/(num.real*num.real+num.imag*num.imag);
	temp.real=(real*num.real+imag*num.imag)*k;
	temp.imag=(num.real*imag-real*num.imag)*k;
	return  temp;
}

void Complex::operator()() //��������"()"��������������������ʵ�����鲿
{
	cout<<real;
	if(imag>0)cout<<"+"<<imag<<"i"<<endl;
	if(imag<0)cout<<imag<<"i"<<endl;
}

int  main()
{
	Complex A1(1,2),A2(3,4),A3,A4,A5,A6;
	A3=A1+A2; //�ȼ���A3=A1.operator+(A2); //�������
	A4=A1-A2; //�ȼ���A4= A1.operator-(A2);	//�������
	A5=A1*A2; //�ȼ���A5= A1.operator*(A2);	//�������
	A6=A1/A2; //�ȼ���A6= A1.operator/(A2);  //�������

    cout<<"�������A1��A2:"<<endl;
	cout<<"A1=";
	A1(); //�������A1
	cout<<endl<<"A2=";
	A2(); //�������A2
	cout<<endl<<"----��������----"<<endl;

	cout<<"A1+A2=";
	A3(); //���������ӵĽ��A3
	cout<<endl;

	cout<<"A1-A2=";
	A4(); //�����������Ľ��A4
	cout<<endl;

	cout<<"A1*A2=";
	A5(); //���������˵Ľ��A5
	cout<<endl;

	cout<<"A1/A2=";
	A6(); //�����������Ľ��A6
	cout<<endl;
	return 0;
}
