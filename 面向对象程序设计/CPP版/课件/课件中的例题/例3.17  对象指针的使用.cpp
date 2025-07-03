//例3.17  对象指针的使用。
#include<iostream>
using namespace std;
class A
{
public:
	A(int a)
	{ 
		x=a; 
	}
	void show_a()
	{ 
		cout<<x<<endl; 
	}
private:
         int x;
 };

int main()
{   
	A ob(2),*p;    // 声明类A的对象ob和类A的对象指针p
	ob.show_a();    // 利用对象名访问对象的成员
	p=&ob;             // 将对象ob的地址赋给对象指针p
	p->show_a();    // 利用对象指针访问对象的成员
	return 0;
} 
