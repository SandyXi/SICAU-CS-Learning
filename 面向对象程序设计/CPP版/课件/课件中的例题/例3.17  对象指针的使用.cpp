//��3.17  ����ָ���ʹ�á�
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
	A ob(2),*p;    // ������A�Ķ���ob����A�Ķ���ָ��p
	ob.show_a();    // ���ö��������ʶ���ĳ�Ա
	p=&ob;             // ������ob�ĵ�ַ��������ָ��p
	p->show_a();    // ���ö���ָ����ʶ���ĳ�Ա
	return 0;
} 
