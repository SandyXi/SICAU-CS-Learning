//��6.9 ���������Ͳ�������ģ�����

#include<iostream>
using namespace std;

template<typename T1,typename T2>  //ģ������
class Myclass{   //��ģ������ΪMyclass
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