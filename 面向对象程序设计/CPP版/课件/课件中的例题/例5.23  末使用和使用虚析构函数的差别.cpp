//��5.23  ĩʹ�ú�ʹ�������������Ĳ��
#include<iostream>
using namespace std;

class B //����
{
public:
	//virtual  ~B()  //����������
	~B()  ��ͨ��������
	{
		cout<<"���û���B����������"<<endl;
	}
};

class D:public B  //������
{
public:
	~D()
	{
		cout<<"����������D����������"<<endl;
	}
};

int main()
{
	B *p;//����ָ��
	p=new D; //����ָ��ָ���������������

	delete p;
	return 0;
}
