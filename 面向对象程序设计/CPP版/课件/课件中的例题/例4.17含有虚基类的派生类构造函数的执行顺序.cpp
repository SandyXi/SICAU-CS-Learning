#include <iostream>   
using namespace std;
class Base  //声明基类Base
{   
public:
	Base(int sa)
	{  
		a=sa; 
		cout<<"Constructing Base"<<endl;  
	}  
private:   
	int a;  
};

class  Base1:virtual public Base //声明基类Base是Base1的虚基类
{ 
public:	
	Base1(int sa,int sb):Base(sa) 
	{ 
		b1=sb; 
		cout<<"Constructing Base1"<<endl;  
	}
private:
	int  b1; 
};

class Base2:virtual public Base//声明基类Base是Base2的虚基类
{
public: 
	Base2(int sa,int sc):Base(sa)  
	{
		b2=sc; 
		cout<<"Constructing Base2"<<endl; 
	} 
private:
	int b2; 
};

class Derived:public Base1,public Base2
{             //Derived是Base1和Base2的共同派生类，是Base的间接派生类
public:  	
	Derived(int sa,int sb,int sc,int sd):Base(sa),Base1(sa,sb),Base2(sa,sc)
    { 
		d=sd;
		cout<<"Constructing Derived"<<endl; 
     }
private:
	int d;   
};
int main()
{      
	Derived  obj(2,4,6,8);
    return  0; 
} 
