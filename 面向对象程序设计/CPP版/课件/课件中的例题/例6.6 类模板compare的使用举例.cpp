//例6.6 类模板compare的使用举例.cpp

#include<iostream>
using namespace std;

template<typename type>  //模板声明
class Compare{   //类模板名称为Compare
public:
	Compare(type a,type b)
	{
		x=a;
		y=b;
	}
	type max()
	{
		return (x>y)?x:y;
	}
private:
	type x,y;
};

int main()
{
	Compare<int>com1(3,7); //用类模板定义对象
	Compare<double>com2(12.34,56.67);
	Compare<char>com3('c','k');

	cout<<"其中的最大值是："<<com1.max()<<endl;
	cout<<"其中的最大值是："<<com2.max()<<endl;
	cout<<"其中的最大值是："<<com3.max()<<endl;
	return 0;
}