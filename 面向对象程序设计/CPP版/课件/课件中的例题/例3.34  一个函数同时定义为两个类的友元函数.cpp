//例3.34  一个函数同时定义为两个类的友元函数
#include <iostream>
using namespace std;

class boy;    // 前向引用
class girl 
{
public:
	girl(char *n,int d)
	{   
		name=new char[strlen(n)+1];
		strcpy(name,n);  age=d;
	}
	friend void disp(girl &g , boy &b);  //声明友元函数
	
	~girl()
	{ 
		delete []name; 
	}
private:
	char *name;  
	int age; 
};

class boy 
{
public:
	boy(char *n,int d)
	{   
		name=new char[strlen(n)+1];
		strcpy(name,n);  age=d;
     }

	friend void disp(girl &g , boy &b);  //声明友元函数
	
	~boy()
	{ 
		delete []name; 
	}
private:
	char *name; 
	int age; 
};

void disp(girl &g , boy &b)   //定义友元函数
{  
	cout<<"Girls name is "<<g.name;
	cout<<",age:"<<g.age<<"\n"; 
	cout<<" Boy name is "<<b.name;
	cout<<",age:"<<b.age<<"\n";
}
int main()
{  
	girl g("Chen Hong",18);
    boy b("Wang Ming",20);
	disp(g,b);     // 调用友元函数
    return 0;
} 	

