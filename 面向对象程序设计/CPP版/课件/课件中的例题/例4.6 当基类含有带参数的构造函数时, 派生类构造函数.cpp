//��4.6 �����ຬ�д������Ĺ��캯��ʱ, �����๹�캯��
#include<iostream>	
using namespace std;
class Base 
{
public:
	Base(int n)  //����Ĺ��캯��
	{ 
		cout<<"Constructing base class\n";
		i=n;     
	}
	~Base()    //�������������
	{
		cout<<"Destructing base class\n";  
	}
	void showi()
	{   
		cout<<i<<endl;  
	}
private:	
    int i;       
}; 

class Derive :public Base
{ 
public:
	Derive(int n,int m):Base(m) // ���������๹�캯��ʱ,
	{                                           // ׺�ϻ���Ĺ��캯��
		cout<<"Constructing derived class"<<endl; 
		j=n; 
	}
	~Derive()                                         //���������������
	{  
		cout<<"Destructing derived class"<<endl;	 
	}
	void showj( ) 
	{  
		cout<<j<<endl; 
	}
private:   
	int j;
};

int main()
{   
	Derive obj(50,60);
	obj.showi(); 
	obj.showj();
	return 0;
}

