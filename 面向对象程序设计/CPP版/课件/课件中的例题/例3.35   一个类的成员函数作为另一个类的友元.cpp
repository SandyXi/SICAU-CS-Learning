//例3.35   一个类的成员函数作为另一个类的友元。
#include<iostream>
#include<string>
using namespace std;

class girl;                       // 前向引用
class boy 
{
public:
    boy(char *n, int d)
    {   
		name=new char[strlen(n)+1];
        strcpy(name,n);
        age=d; 
	}
     void disp(girl &);   // 声明disp()为类boy的成员函数
     
	 ~boy()
     { 
		 delete name; 
	 }
private:
     char *name;
     int age;  
};

class girl 
{
public:
	girl(char *n,int d)
	{   
		name=new char[strlen(n)+1];
		strcpy(name,n); 
		age=d; 
	}                    // 声明类boy的成员函数disp()
	
	friend void boy::disp(girl &); // 为类girl的友元函数
	
	~girl()
	{ 
		delete name; 
	}
private:
	char *name;
	int age; 
};

void boy::disp(girl &x)              // 定义友元函数disp()
{  
	cout<<"Boys name is "<<name<<",age:"<<age<<"\n";
	cout<<"Girls name is "<<x.name<<",age:"<<x.age<<"\n";    
}
void main()
{  
	boy b("Chen Hao",25);
	girl e("Zhang Wei ",18);
	b.disp(e); 
}

