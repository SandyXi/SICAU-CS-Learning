//例4.5 基类和派生类的构造函数及析构函数的执行顺序
#include<iostream>
using namespace std;	
class Base
{	 
public:	 
	Base()//构造函数
	{ 
		cout<<"Constructing base class\n"; 
	} 

    ~Base()//析构函数 
	{ 
		cout<<"Destructing baes class\n"; 
	 }  
};

class Derive:public Base
{	 
public:
    Derive()//派生类的构造函数
	{
		cout<<"Constructing derived class\n";
	}  
                                                                       
    ~Derive() //派生类的析构函数
	{
		cout<<"Destructing derived class\n";
	}                                                                      
};

int main()
{    
	Derive op; 
	cout<<"---我的程序执行完了！---"<<endl;
    return 0;      
} 
