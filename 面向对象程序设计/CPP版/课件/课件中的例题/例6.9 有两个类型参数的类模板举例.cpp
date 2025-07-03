//例6.9 有两个类型参数的类模板举例

#include<iostream>
using namespace std;

template<typename T1,typename T2>  //模板声明
class Myclass{   //类模板名称为Myclass
public:
	Myclass(T1 a,T2 b)
	{
		i=a;
		j=b;
	}
	void show()
	{
		cout<<i<<","<<j<<endl;
	}
private:
	T1 i;
	T2 j;
};


int main()
{
	Myclass<int,double>ob1(12,0.15);
	Myclass<char,char*>ob2('x',"This is a test.");

	ob1.show();
	ob2.show();
	return 0;
}