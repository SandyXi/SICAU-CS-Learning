#include <iostream>   
using namespace std;
class Base{   //��������Base
public:
	Base()
	{  
		a=5; 
		cout<<"Base a="<<a<<endl;  
	}  
protected:   
	int a;  
};
class  Base1:virtual public Base{  //��������Base��Base1�������
public:
	int  b1;
    Base1() 
	{ 
		a=a+10; 
		cout<<"Base1 a="<<a<<endl; 
	}  
};
class Base2:virtual public Base{//��������Base��Base2�������
public: 
	int b2;
    Base2()  
	{
		a=a+20; 
		cout<<"Base2 a="<<a<<endl;
	}  
}; 
class Derived:public Base1,public Base2{
public:  //Derived��Base1��Base2�Ĺ�ͬ�����࣬��Base�ļ��������
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
