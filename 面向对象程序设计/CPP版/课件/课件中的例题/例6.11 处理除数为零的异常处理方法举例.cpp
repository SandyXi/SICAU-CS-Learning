//��6.11 �������Ϊ����쳣����������

#include <iostream>
using namespace std;

int diva(int x,int y);//����divԭ������

int main()
{	
	try  //����쳣
	{
		cout<<"7/3="<<diva(7,3)<<endl;
		cout<<"5/0="<<diva(5,0)<<endl;
	}
	catch(int) //�����쳣���쳣����Ϊint��
	{
		cout<<"����Ϊ0������"<<endl;
	}
	return 0;
}

int diva(int x,int y)
{	
	if (y==0)	
		throw y;  //�׳��쳣��������Ϊ0ʱ�׳�int���쳣
	return x/y;  //��������Ϊ0ʱ������ֵ
}
