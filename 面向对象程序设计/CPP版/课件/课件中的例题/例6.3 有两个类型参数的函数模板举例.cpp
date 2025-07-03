//例6.3 有两个类型参数的函数模板举例
#include<iostream>
using namespace std;

template<typename type1,typename type2>  //模板声明，其中T为参数类型
void myfunc(type1 x,type2 y)   //定义函数模板
{
	cout<<x<<","<<y<<endl;
}

int main()
{
	myfunc(10,"hao");
	myfunc(0.123,0x100);
	system("pause");
	return 0;
}