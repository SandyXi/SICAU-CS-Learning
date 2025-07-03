//函数返回值
#include<iostream>
using namespace std;

int max1(int m,int n)
{
	int t;
	if(m>n)t=m;
		else t=n;
	cout<<"函数max1局部变量地址："<<endl;
	cout<<&m<<","<<&n<<","<<&t<<endl;
	return t;
}

int& max2(int &m,int &n)
{
	cout<<"函数max2局部变量地址："<<endl;
	cout<<&m<<","<<&n<<endl;
	if(m>n)return m;
		else return n;
}
int* max3(int *m,int *n)
{
	cout<<"函数max3局部变量地址："<<endl;
	cout<<m<<","<<n<<endl;
	if(*m>*n)return m;
		else return n;
}
int main()
{
	int a=5,b=10,c,*p;
	cout<<"a="<<a<<" b="<<b<<endl;
	cout<<"main函数变量地址："<<endl;
	cout<<&a<<","<<&b<<endl;

	cout<<"返回值："<<endl;
	cout<<&(max1(a,b))<<endl;

	cout<<"返回引用："<<endl;
	cout<<&(max2(a,b))<<endl;

	cout<<"返回指针："<<endl;
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
