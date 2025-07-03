//例3.22 使用对象指针作为函数参数
#include<iostream>
using namespace std;
class aClass
{
public:
    aClass(int n) 
	{
		i=n; 
	}
    void set(int n)
	{ 
		i=n; 
	}
    int get( )
	{ 
		return i;
	}
private: 
	int i; 
};		  
void sqr(aClass *ob)
{       
	ob->set(ob->get()*ob->get());
    cout<<"在函数sqr中，形参对象ob的数据成员i的值为：";
    cout<<ob->get()<<endl; 
}
int main()
{   
	aClass  obj(10);
	cout<<"调用函数sqr前，实参对象obj的数据成员i的值为：";
    cout<<obj.get( )<<endl;
	sqr(&obj); 
	cout<<"调用函数sqr后，实参对象obj的数据成员i的值为：";
    cout<<obj.get( )<<endl;
	return 0;  
} 