//��6.13 ��ɾ�ںš�..."���쳣����

#include <iostream>
using namespace std;

void func(int x)
{
	if(x)throw x;
}

int main()
{	
	try  //����쳣
	{
		func(5);
		cout<<"No here"<<endl;
	}
	catch(...) //�����쳣���쳣����Ϊ�κ�����
	{
		cout<<"�κ������쳣"<<endl;
	}
	return 0;
}

