//������������
#include <iostream>
using namespace std;

int swap1(int m,int n)
{
	int temp;
	temp= m;
	m=n;
	n=temp;
}

int* swap2(int *m,int *n)
{
	int temp;
	temp= *m;
	*m=*n;
	*n=temp;
}

void swap3(int &m,int &n)
{
	int temp;
	temp=m;
	m=n;
	n=temp;
}

int main()
{
	int a=5,b=10;
	cout<<"a="<<a<<" b="<<b<<endl;

	cout<<"��ֵ���ã�"<<endl;
	cout<<swap1(a,b)<<endl;
	cout<<"a="<<a<<" b="<<b<<endl;

	cout<<"����ַ���ã�ָ��ʵ��"<<endl;
	swap2(&a,&b);
	cout<<"a="<<a<<" b="<<b<<endl;

	cout<<"����ַ���ã�����ʵ��"<<endl;
	swap3(a,b);
	cout<<"a="<<a<<" b="<<b<<endl;


	return 0;
}
