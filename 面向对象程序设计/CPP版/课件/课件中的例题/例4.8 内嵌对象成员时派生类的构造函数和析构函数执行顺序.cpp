//��4.8 ��Ƕ�����Աʱ������Ĺ��캯������������ִ��˳��
#include <iostream>
using namespace std;
class Base //����
{
public:
	Base(int i)
	{
		x=i;
		cout<<"Constructing Base class"<<endl;	
	}

	~Base()
	{
		cout<<"Destructing Base class"<<endl;	
	}
	void show()
	{
		cout<<"x="<<x<<endl;
	}
private: 
	int x;  
};

class Derived:public Base  //������
{
public:
	Derived(int i):Base(i),d(i)
	{
		cout<<"Constructing Derived class"<<endl;	
	}

	~Derived()
	{
		cout<<"Destructing Derived class"<<endl;	
	}
private: 
	Base d;   //��Ƕ�������d
};

int main()
{ 
	Derived obj(5);  
	obj.show();
	cout<<"---------"<<endl;
	return 0;
}
