//��6.3 ���������Ͳ����ĺ���ģ�����
#include<iostream>
using namespace std;

template<typename type1,typename type2>  //ģ������������TΪ��������
void myfunc(type1 x,type2 y)   //���庯��ģ��
{
	cout<<x<<","<<y<<endl;
}

int main()
{
	myfunc(10,"hao");
	myfunc(0.123,0x100);
	system("pause");
	return 0;
}