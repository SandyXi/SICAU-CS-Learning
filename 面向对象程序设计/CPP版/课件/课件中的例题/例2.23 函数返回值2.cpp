//��������ֵ
#include<iostream>
using namespace std;

int max1(int m,int n)
{
	int t;
	if(m>n)t=m;
		else t=n;
	cout<<"����max1�ֲ�������ַ��"<<endl;
	cout<<&m<<","<<&n<<","<<&t<<endl;
	return t;
}

int& max2(int &m,int &n)
{
	cout<<"����max2�ֲ�������ַ��"<<endl;
	cout<<&m<<","<<&n<<endl;
	if(m>n)return m;
		else return n;
}
int* max3(int *m,int *n)
{
	cout<<"����max3�ֲ�������ַ��"<<endl;
	cout<<m<<","<<n<<endl;
	if(*m>*n)return m;
		else return n;
}
int main()
{
	int a=5,b=10,c,*p;
	cout<<"a="<<a<<" b="<<b<<endl;
	cout<<"main����������ַ��"<<endl;
	cout<<&a<<","<<&b<<endl;

	cout<<"����ֵ��"<<endl;
	cout<<&(max1(a,b))<<endl;

	cout<<"�������ã�"<<endl;
	cout<<&(max2(a,b))<<endl;

	cout<<"����ָ�룺"<<endl;
	cout<<max3(&a,&b)<<endl;

	cout<<"------------------------------------------------"<<endl;
	c=max1(a,b);
	cout<<&c<<","<<c<<endl;

	c=max2(a,b);
	cout<<&c<<","<<c<<endl;

	p=max3(&a,&b);
	cout<<p<<","<<*p<<endl;


	return 0;
}
