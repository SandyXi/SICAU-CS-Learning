//��7.12 ��'a' ��'z' ��26��Ӣ����ĸд���ļ�������Ӹ��ļ��ж�������ʾ����

#include<iostream>
#include<fstream>
using namespace std;
int test_write()
{
	ofstream fout("f3.dat",ios::binary);  //��������ļ�������fout���򿪶������ļ�f3.dat
	if(!fout)   //����򲻿�fout����0ֵ
	{
		cout<<"�ļ��򲻿�i��"<<endl;
		return 1;
	}
	char ch='a';
	for(int i=0;i<26;i++)
	{
		fout.put(ch);
		ch++;
	}
	fout.close();
	return 0;
}

int test_read()
{
	ifstream fin("f3.dat",ios::binary);  //���������ļ�������fin���򿪶������ļ�f3.dat
	if(!fin)
	{
		cout<<"�ļ��򲻿�i��"<<endl;
		return 1;
	}

	char ch;
	while(fin.get(ch))
		cout<<ch;

	fin.close();
	return 0;
}

int main()
{
	test_write();
	test_read();
	return 0;
}
