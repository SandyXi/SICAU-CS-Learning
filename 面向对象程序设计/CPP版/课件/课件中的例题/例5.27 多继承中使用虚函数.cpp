//例5.27 多继承中使用虚函数
#include<iostream>
using namespace std;
class Base1 //定义基类Base1
{		          
public:
  virtual void fun()          //定义虚函数
  {
	  cout<<" ---Base1----"<<endl;
  }  
};

class Base2 //定义基类Base2
{		          
public:
  void fun()          //fun()普通函数
  {
	  cout<<" ---Base2----"<<endl;
  }  
};

class Derived:public Base1, public Base2 //定义派生类Derive
{  public:
      void fun()
      {cout<<"---Derived---"<<endl;}  
};

int main()
{
	Base1 *ptr1; //基类1指针
	Base2 *ptr2; //基类2指针
	Derived obj3;  //派生类对象
	
	ptr1=&obj3; 
	ptr1->fun();  //fun()为虚函数，调用派生类的虚函数

	ptr2=&obj3;
	ptr2->fun(); //fun()为普通函数，调用基类Base2的函数

}