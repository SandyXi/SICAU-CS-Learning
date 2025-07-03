//例3.33 友元函数的使用

#include<iostream> 
#include<string>
using namespace std;

class girl 
{
public:
	girl(char *n,int d)
	{   
		name=new char[strlen(n)+1];
        strcpy(name,n);  age=d; 
	}
	friend void disp(girl &);   //声明友元函数
	~girl()
	{ 
		delete []name; 
	}
private:
	char *name;  
	int age;   
};

void disp(girl &x)     //定义友元函数
{  
	cout<<"Girls name is "<<x.name<<endl;
    cout<<"age:"<<x.age<<endl; 
}
void main()
{   
	girl g1("Chen Xingwei",18);
    disp(g1);     // 调用友元函数
} 
