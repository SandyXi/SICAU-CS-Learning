//例6.7 在类模板体外定义成员函数举例

#include<iostream>
using namespace std;

template<typename T>  //模板声明
class Compare{   //类模板名称为Compare
public:
	Compare(T a,T b);
	T max();
private:
	T x,y;
};

template<typename T> //模板声明
Compare<T>::Compare(T a,T b) //在类模板体外定义构造函数
{
	x=a;
	y=b;
}

template<typename T> //模板声明
T Compare<T>::max() //在类模板体外定义函数
{
	return (x>y)?x:y;
}

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