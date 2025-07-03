//例5.11 重载赋值运算符解决指针悬挂问题(深拷贝)
#include<iostream>
using namespace std;
class STRING
{
public:
	STRING(char *s)
	{
		cout<<"Constructor called."<<endl;
		ptr=new char[strlen(s)+1];
		strcpy(ptr,s);
	}
	~STRING()
	{
		cout<<"Destructor called.---"<<ptr<<endl;
		delete ptr;
	}
	STRING &operator=(const STRING &S); //声明赋值运算符重载函数

private:
	char *ptr;
};

STRING &STRING::operator=(const STRING &s)  //定义赋值运算符重载函数
{
	if(this==&s)return *this;  //防止s=s的赋值
	delete ptr;  //释放掉原区域
	ptr=new char[strlen(s.ptr)+1];  //分配新区域
	strcpy(ptr,s.ptr);  //字符串复制
	return *this;
}

int main()
{
	STRING p1("book");
	STRING p2("jeep");
	p2=p1;
	return 0;
}

