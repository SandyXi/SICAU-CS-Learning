//��6.5 ����ģ��ͷǺ���ģ�����ؾ���

#include<iostream>
using namespace std;

template<typename type>  //���庯��ģ��max
type max(type x,type y)   
{
	cout<<"����ģ�庯����"<<endl;
	return(x>y)?x:y;
}


int max(int x,int y)  //�����ģ�庯�����뺯��ģ��max���� 
{
	cout<<"���÷�ģ�庯����"<<endl;
	return(x>y)?x:y;
}
int main()
{
	int i1=10,i2=20;
	double d1=50.34,d2=20.2;
	char c1='k',c2='n';

	cout<<"�ϴ�������ǣ�"<<max(i1,i2)<<endl;

	cout<<"�ϴ��˫�������ǣ�"<<max(d1,d2)<<endl;

	cout<<"�ϴ���ַ��ǣ�"<<max(c1,c2)<<endl;
	return 0;
}