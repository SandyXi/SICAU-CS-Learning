//例4.6 当基类含有带参数的构造函数时, 派生类构造函数
#include<iostream>	
using namespace std;
class Base 
{
public:
	Base(int n)  //基类的构造函数
	{ 
		cout<<"Constructing base class\n";
		i=n;     
	}
	~Base()    //基类的析构函数
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
	Derive(int n,int m):Base(m) // 定义派生类构造函数时,
	{                                           // 缀上基类的构造函数
		cout<<"Constructing derived class"<<endl; 
		j=n; 
	}
	~Derive()                                         //派生类的析构函数
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

