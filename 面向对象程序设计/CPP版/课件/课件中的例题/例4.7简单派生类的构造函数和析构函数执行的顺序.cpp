//��4.7��������Ĺ��캯������������ִ�е�˳��
#include <iostream>
using namespace std;
class A
{
public:
	A()
	{
		cout<<"Constructing A class"<<endl;
	}
	~A()
	{
		cout<<"Destructing A class"<<endl;	
	}    
};

class B:public A
{
public:
	B()
	{
		cout<<"Constructing B class"<<endl;	
	}
	~B()
	{
		cout<<"Destructing B class"<<endl;	
	}   
};
int main()
{ 
	B b;
	cout<<"main()����ִ�����ˣ�"<<endl;
	return 0;
}
