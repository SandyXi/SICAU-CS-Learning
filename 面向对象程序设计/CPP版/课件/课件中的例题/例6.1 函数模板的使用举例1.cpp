//��6.1 ����ģ���ʹ�þ���1

#include<iostream>
using namespace std;

template<typename AT>  //ģ������������ATΪ��������
AT max(AT x,AT y)   //���庯��ģ��
{
	return (x>y)?x:y;
}

int main()
{
	int i1=10,i2=56;
	double d1=50.344,d2=4656.346;
	char c1='k',c2='n';
	cout<<"�ϴ�������ǣ�"<<max(i1,i2)<<endl;
	cout<<"�ϴ��˫�������ǣ�"<<max(d1,d2)<<endl;
	cout<<"�ϴ���ַ��ǣ�"<<max(c1,c2)<<endl;
	return 0;
}