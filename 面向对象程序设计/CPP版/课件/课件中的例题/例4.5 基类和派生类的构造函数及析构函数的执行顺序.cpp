//��4.5 �����������Ĺ��캯��������������ִ��˳��
#include<iostream>
using namespace std;	
class Base
{	 
public:	 
	Base()//���캯��
	{ 
		cout<<"Constructing base class\n"; 
	} 

    ~Base()//�������� 
	{ 
		cout<<"Destructing baes class\n"; 
	 }  
};

class Derive:public Base
{	 
public:
    Derive()//������Ĺ��캯��
	{
		cout<<"Constructing derived class\n";
	}  
                                                                       
    ~Derive() //���������������
	{
		cout<<"Destructing derived class\n";
	}                                                                      
};

int main()
{    
	Derive op; 
	cout<<"---�ҵĳ���ִ�����ˣ�---"<<endl;
    return 0;      
} 
