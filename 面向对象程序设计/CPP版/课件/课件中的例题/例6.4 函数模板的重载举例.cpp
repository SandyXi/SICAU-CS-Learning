//例6.4 函数模板的重载举例
#include<iostream>
using namespace std;

template<typename type>  //定义含有两个类型参数的函数模板max
type max(type x,type y)   
{
	return(x>y)?x:y;
}

template<typename type>  //定义含有三类型个参数的函数模板max
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

	cout<<"调用有两个类型参数的模板函数max："<<max1<<endl;
	cout<<"调用有三个类型参数的模板函数max："<<max2<<endl;
	return 0;
}