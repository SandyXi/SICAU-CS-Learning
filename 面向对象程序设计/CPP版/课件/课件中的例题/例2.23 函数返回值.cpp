//函数返回值
#include<iostream>
using namespace std;

int max1(int m,int n)
{
	int t;
	if(m>n)t=m;
		else t=n;
	return t;
}

int& max2(int &m,int &n)
{
	if(m>n)return m;
		else return n;
}
int* max3(int *m,int *n)
{
	if(*m>*n)return m;
		else return n;
}
int main()
{
	int a=5,b=10;
	cout<<"a="<<a<<" b="<<b<<endl;

	cout<<"返回值："<<endl;
	cout<<max1(a,b)<<endl;

	cout<<"返回引用："<<endl;
	cout<<max2(a,b)<<endl;

	cout<<"返回指针："<<endl;
	cout<<*(max3(&a,&b))<<endl;


	return 0;
}
