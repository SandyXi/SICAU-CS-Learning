//��7.11 �Ƚ���һ������ļ�������д�����ݣ�Ȼ��ر��ļ����ڰ�����ģʽ����������ȡ��Ϣ

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout("f2.dat",ios::out);  //��������ļ�������fout��������ļ�f2.dat
	if(!fout)   //����򲻿�fout����0ֵ
	{
		cout<<"�ļ��򲻿�i��"<<endl;
		return 1;
	}
	fout<<"Hello"<<endl;
	fout<<100<<"  "<<hex<<100<<endl;
	fout.close();

	ifstream fin("f2.dat",ios::in);   //���������ļ�������fin���������ļ�f2.dat
	if(!fin)
	{
		cout<<"�ļ��򲻿�i��"<<endl;
		return 1;
	}
	char str[80];
	int i;
	fin>>str>>i;
	cout<<str<<"   "<<i<<endl;

	fin.close();
	return 0;
}
