#include<iostream>
using namespace std;
/*
class A {     //��������
public:
	A(int x1)
	{
		x=x1;
	}
	void print()
	{
		cout<<"x="<<x<<endl;
	}
private:
	int x;
};
class B:private A{      //����������
public:
	B(int x1,int y1):A(x1)
	{
		y=y1;
	}
	void print2()           //ͨ��������B�ĺ���print2���û���A�ĺ���print����
	{
		print();   //���û���ĳ�Աprint()
	}
/*  1��ͬ����Ա��
    void print()           //��������B���¶��庯��print����
	{
		A::print();   //���û���ĳ�Աprint()
	}
	2����������     ����4.12��������Ӧ�ã�
	A::print;    //�����������ѻ���Ĺ��г�Ա����print����Ϊ˽��������Ĺ��г�Ա����


private:
	int y;
};*/

class A {     //��������
public:
	A(int x1)
	{
		x=x1;
	}
	void print()
	{
		cout<<"x="<<x<<endl;
	}
private:
	int x;
};

class B:protected A{      //����������
public:
	B(int x1,int y1):A(x1)
	{
		y=y1;
	}
/*	void print2()           //ͨ��������B�ĺ���print2���û���A�ĺ���print����
	{
		print();   //���û���ĳ�Աprint()
	}
  1��ͬ����Ա��
    void print()           //��������B���¶��庯��print����
	{
		A::print();   //���û���ĳ�Աprint()
	}
	2����������     ����4.12��������Ӧ�ã�
	A::print;    //�����������ѻ���Ĺ��г�Ա����print����Ϊ˽��������Ĺ��г�Ա����

*/
  using   A::print;
private:
	int y;
};


int main()
{
	B b(10,20);
	b.print();
	return 0;
}


