#include <iostream>   
using namespace std;
class Base{   //声明基类Base
public:
	Base()
	{  
		a=5; 
		cout<<"Base a="<<a<<endl;  
	}  
protected:   
	int a;  
};
class  Base1:virtual public Base{  //声明基类Base是Base1的虚基类
public:
	int  b1;
    Base1() 
	{ 
		a=a+10; 
		cout<<"Base1 a="<<a<<endl; 
	}  
};
class Base2:virtual public Base{//声明基类Base是Base2的虚基类
public: 
	int b2;
    Base2()  
	{
		a=a+20; 
		cout<<"Base2 a="<<a<<endl;
	}  
}; 
class Derived:public Base1,public Base2{
public:  //Derived是Base1和Base2的共同派生类，是Base的间接派生类
	int d;
    Derived()
    { 
		//cout<<"Base1::a="<<Base1::a<<endl;
        //cout<<"Base2::a="<<Base2::a<<endl;
        cout<<"Derived a="<<a <<endl;       
     }   
};
int main()
{      
	Derived  obj;
    return  0; 
} 
