//例4.8 内嵌对象成员时派生类的构造函数和析构函数执行顺序
#include <iostream>
using namespace std;
class Base //基类
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

class Derived:public Base  //派生类
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
	Base d;   //内嵌基类对象d
};

int main()
{ 
	Derived obj(5);  
	obj.show();
	cout<<"---------"<<endl;
	return 0;
}
