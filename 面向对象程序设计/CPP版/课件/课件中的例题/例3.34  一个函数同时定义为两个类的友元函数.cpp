//��3.34  һ������ͬʱ����Ϊ���������Ԫ����
#include <iostream>
using namespace std;

class boy;    // ǰ������
class girl 
{
public:
	girl(char *n,int d)
	{   
		name=new char[strlen(n)+1];
		strcpy(name,n);  age=d;
	}
	friend void disp(girl &g , boy &b);  //������Ԫ����
	
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

	friend void disp(girl &g , boy &b);  //������Ԫ����
	
	~boy()
	{ 
		delete []name; 
	}
private:
	char *name; 
	int age; 
};

void disp(girl &g , boy &b)   //������Ԫ����
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
	disp(g,b);     // ������Ԫ����
    return 0;
} 	

