//��7.14  ����7.13�Զ�������ʽ����ڴ����ļ��е����ݣ����ſγ̵Ŀγ����ͳɼ��������ڴ棬������ʾ������ʾ

#include<iostream>
#include<stdlib.h>
#include<fstream>
using namespace std;

struct stu
{
	char course[15];
	int score;
};

int main()
{
	stu s1[3];
	int i;

	ifstream in("f4.dat",ios::binary);  //���������ļ�������in���򿪶������ļ�f4.dat
	if(!in)   //����򲻿�fout����0ֵ
	{
		cout<<"�ļ��򲻿�i��"<<endl;
		exit(1);
	}
	for(i=0;i<3;i++)
	{
		in.read((char*)&s1[i],sizeof(s1[i]));
		cout<<s1[i].course<<"   "<<s1[i].score<<endl;
	}
	in.close();
	return 0;
}
