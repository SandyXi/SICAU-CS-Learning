//��3.24 ����ֵ���ʾ��
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
