//��6.12 �ж��catch����쳣����

#include <iostream>
using namespace std;

template<typename type>
void show(type a)
{
	try  //����쳣
	{
		throw a;
	}
	catch(int) //�����쳣���쳣����Ϊint��
	{
		cout<<"�쳣�����������ͣ�"<<endl;
	}
	catch(double) //�����쳣���쳣����Ϊdouble��
	{
		cout<<"�쳣������˫�����ͣ�"<<endl;
	}
	catch(char) //�����쳣���쳣����Ϊchar��
	{
		cout<<"�쳣�������ַ��ͣ�"<<endl;
	}
	cout<<"end"<<endl;
}
int main()
{
/*	double a=2.5;
	try  //����쳣
	{
		throw a;
	}
	catch(int) //�����쳣���쳣����Ϊint��
	{
		cout<<"�쳣�����������ͣ�"<<endl;
	}
	catch(double) //�����쳣���쳣����Ϊdouble��
	{
		cout<<"�쳣������˫�����ͣ�"<<endl;
	}
	cout<<"end"<<endl;
	*/
	int x;
	double y;
	char c;
	cout<<"����������"<<endl;
	cin>>x;
    show(x);

	cout<<"����С����"<<endl;
	cin>>y;
    show(y);
	
	cout<<"�����ַ���"<<endl;
	cin>>c;
    show(c);
	return 0;
}
