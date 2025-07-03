//例3.36 友元类的应用
#include <iostream>   
#include <string>
using namespace std;

class boy;
class girl 
{
public:
	girl(char *n,int d)
	{   
		name=new char[strlen(n)+1];
		strcpy(name,n);  
		age=d;              
	}

	void disp(boy &b);

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
		strcpy(name,n);  
		age=d;
	}

	friend girl;       //声明友元类girl
	
	~boy()
	{ 
		delete []name; 
	}
private:
	char *name;  
	int age; 
};

void girl::disp(boy &b)   //定义girl的函数disp
{  
	cout<<"Girls name is: "<<name;
	cout<<",age:"<<age<<"\n"; 
	cout<<"Boy name is: "<<b.name;
	cout<<",age:"<<b.age<<"\n";
}

int main()
{   
	girl g("Chen Hong",18);
	boy b("Wang Ming",20);
	g.disp(b);              // 调用girl的函数disp
	return 0;
} 	
