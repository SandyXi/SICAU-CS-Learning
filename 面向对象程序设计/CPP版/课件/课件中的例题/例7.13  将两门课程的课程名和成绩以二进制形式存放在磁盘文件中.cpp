//��7.13  �����ſγ̵Ŀγ����ͳɼ��Զ�������ʽ����ڴ����ļ���

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
	for(i=0;i<3;i++)
	{
		cout<<"�������"<<i+1<<"����Ա���γ���  �ɼ�"<<endl;
		cin>>s1[i].course;
		cin>>s1[i].score;
	}
	ofstream out("f4.dat",ios::binary);  //��������ļ�������out���򿪶������ļ�f4.dat
	if(!out)   //����򲻿�fout����0ֵ
	{
		cout<<"�ļ��򲻿�i��"<<endl;
		exit(1);
	}
	for(i=0;i<3;i++)
	{
		out.write((char*)&s1[i],sizeof(s1[i]));
	}
	out.close();
	return 0;
}
