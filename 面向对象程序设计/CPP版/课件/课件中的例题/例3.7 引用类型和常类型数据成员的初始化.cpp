//��3.7 �������ͺͳ��������ݳ�Ա�ĳ�ʼ����
#include<iostream>
using namespace std;
class A
{
public:                                                                // x(x1)�൱��x=x 1,
    A(int x1):x(x1),rx(x),pi(3.14) {   }                      // rx(x)�൱��rx=x ,   pi(3.14)�൱��pi=3.14
    void print()
    {
		cout<<"x="<<x<<"  "<<"rx="<<rx<<"  "<<"pi="<<pi; }
private:
    int x;
	int& rx;  //��������
	const double pi; //������
};
main()
{
	A a(10);
    a.print();
    return 0;
}
