//��7.10 ��һ��������һ����������һ���ַ���д�������ļ�f1.dat��

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout("f1.dat",ios::out);
	if(!fout)
	{
		cout<<"�ļ��򲻿�i��"<<endl;
		return 1;
	}
	fout<<10<<"  "<<123.456<<endl;
	fout<<"This is a text file."<<endl;
	fout.close();
}
