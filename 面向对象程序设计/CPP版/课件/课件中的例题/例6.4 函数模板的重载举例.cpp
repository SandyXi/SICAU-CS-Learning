//��6.4 ����ģ������ؾ���
#include<iostream>
using namespace std;

template<typename type>  //���庬���������Ͳ����ĺ���ģ��max
type max(type x,type y)   
{
	return(x>y)?x:y;
}

template<typename type>  //���庬�������͸������ĺ���ģ��max
type max(type x,type y,type z)   
{
	type t;
	t=(x>y)?x:y;
	return(t>z)?t:z;
}
int main()
{
	int m=10,n=20,max1;
	double a=10.1,b=20.2,c=30.3,max2;

	max1=max(m,n);
	max2=max(a,b,c);

	cout<<"�������������Ͳ�����ģ�庯��max��"<<max1<<endl;
	cout<<"�������������Ͳ�����ģ�庯��max��"<<max2<<endl;
	return 0;
}