//��3.35   һ����ĳ�Ա������Ϊ��һ�������Ԫ��
#include<iostream>
#include<string>
using namespace std;

class girl;                       // ǰ������
class boy 
{
public:
    boy(char *n, int d)
    {   
		name=new char[strlen(n)+1];
        strcpy(name,n);
        age=d; 
	}
     void disp(girl &);   // ����disp()Ϊ��boy�ĳ�Ա����
     
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
	}                    // ������boy�ĳ�Ա����disp()
	
	friend void boy::disp(girl &); // Ϊ��girl����Ԫ����
	
	~girl()
	{ 
		delete name; 
	}
private:
	char *name;
	int age; 
};

void boy::disp(girl &x)              // ������Ԫ����disp()
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

