//��3.33 ��Ԫ������ʹ��

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
	friend void disp(girl &);   //������Ԫ����
	~girl()
	{ 
		delete []name; 
	}
private:
	char *name;  
	int age;   
};

void disp(girl &x)     //������Ԫ����
{  
	cout<<"Girls name is "<<x.name<<endl;
    cout<<"age:"<<x.age<<endl; 
}
void main()
{   
	girl g1("Chen Xingwei",18);
    disp(g1);     // ������Ԫ����
} 
