//例3.24 对象赋值语句示例
#include<iostream>
using namespace std;
class abc
{
public:
    abc(int i=0,int j=0)
	{
		a=i;
		b=j;
	}
    void show()
	{
		cout<<a<<"  "<<b<<endl;
	}
private:
    int a,b;
};
int main()
{
	abc o1(12,34),o2;
	o1.show();
	o2.show();
	o2=o1;
	o1.show();
	o2.show();
	return 0;
}
