//��6.6 ��ģ��compare��ʹ�þ���.cpp

#include<iostream>
using namespace std;

template<typename type>  //ģ������
class Compare{   //��ģ������ΪCompare
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
	Compare<int>com1(3,7); //����ģ�嶨�����
	Compare<double>com2(12.34,56.67);
	Compare<char>com3('c','k');

	cout<<"���е����ֵ�ǣ�"<<com1.max()<<endl;
	cout<<"���е����ֵ�ǣ�"<<com2.max()<<endl;
	cout<<"���е����ֵ�ǣ�"<<com3.max()<<endl;
	return 0;
}