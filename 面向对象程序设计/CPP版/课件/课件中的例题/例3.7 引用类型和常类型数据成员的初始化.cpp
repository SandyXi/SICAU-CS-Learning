//例3.7 引用类型和常类型数据成员的初始化。
#include<iostream>
using namespace std;
class A
{
public:                                                                // x(x1)相当于x=x 1,
    A(int x1):x(x1),rx(x),pi(3.14) {   }                      // rx(x)相当于rx=x ,   pi(3.14)相当于pi=3.14
    void print()
    {
		cout<<"x="<<x<<"  "<<"rx="<<rx<<"  "<<"pi="<<pi; }
private:
    int x;
	int& rx;  //引用类型
	const double pi; //常类型
};
main()
{
	A a(10);
    a.print();
    return 0;
}
