//例6.1 函数模板的使用举例1

#include<iostream>
using namespace std;

template<typename AT>  //模板声明，其中AT为参数类型
AT max(AT x,AT y)   //定义函数模板
{
	return (x>y)?x:y;
}

int main()
{
	int i1=10,i2=56;
	double d1=50.344,d2=4656.346;
	char c1='k',c2='n';
	cout<<"较大的整数是："<<max(i1,i2)<<endl;
	cout<<"较大的双精度数是："<<max(d1,d2)<<endl;
	cout<<"较大的字符是："<<max(c1,c2)<<endl;
	return 0;
}