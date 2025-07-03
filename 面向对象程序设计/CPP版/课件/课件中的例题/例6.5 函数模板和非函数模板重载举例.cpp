//例6.5 函数模板和非函数模板重载举例

#include<iostream>
using namespace std;

template<typename type>  //定义函数模板max
type max(type x,type y)   
{
	cout<<"调用模板函数："<<endl;
	return(x>y)?x:y;
}


int max(int x,int y)  //定义非模板函数，与函数模板max重载 
{
	cout<<"调用非模板函数："<<endl;
	return(x>y)?x:y;
}
int main()
{
	int i1=10,i2=20;
	double d1=50.34,d2=20.2;
	char c1='k',c2='n';

	cout<<"较大的整数是："<<max(i1,i2)<<endl;

	cout<<"较大的双精度数是："<<max(d1,d2)<<endl;

	cout<<"较大的字符是："<<max(c1,c2)<<endl;
	return 0;
}