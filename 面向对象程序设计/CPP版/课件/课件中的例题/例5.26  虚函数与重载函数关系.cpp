//��5.26  �麯�������غ�����ϵ
#include<iostream>
using namespace std;

class Base //����
{
public:
	virtual void func1();
	virtual void func2();
	virtual void func3();
	void func4();
};

class Derived:public Base  //������
{
public:
	virtual void func1();//func1���麯����������Բ�дvirtual
	void func2(int x); //������е�func2��Ϊ��ͨ�������أ��麯��������ʧ
	//char func3();//������Ϊ������е�func3ֻ�з������Ͳ�ͬ��Ӧɾȥ
	void func4();//������е�func4ʦ��ͨ�������أ������麯��
};
void Base::func1()
{
	cout<<"--Base func1()--"<<endl;
}

void Base::func2()
{
	cout<<"--Base func2()--"<<endl;
}

void Base::func3()
{
	cout<<"--Base func3()--"<<endl;
}

void Base::func4()
{
	cout<<"--Base func4()--"<<endl;
}

void Derived::func1()
{
	cout<<"--Derived func1()--"<<endl;
}

void Derived::func2(int x)
{
	cout<<"--Derived func2()--"<<endl;
}

void Derived::func4()
{
	cout<<"--Derived func4()--"<<endl;
}

int main()
{
	Base *p;//����ָ��
	Derived d2; //���������
	p=&d2;

	p->func1(); //����Derived::func1()
	p->func2();  //����Base::func2()
	p->func4();   //����Base::func4()
}
