//��7.15 ������ʶ����������ļ�

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
	stu s1[3]={{"computer",90},{"math",87},{"english",60}};
	stu s2;
	int i;

	fstream ff("f6.dat",ios::in|ios::out|ios::binary);  //���������ļ�������in���򿪶������ļ�f4.dat
	if(!ff)   //����򲻿�fout����0ֵ
	{
		cout<<"�ļ��򲻿�i��"<<endl;
		exit(1);
	}
	for(i=0;i<3;i++)  //��3�ſγ�д���ļ�
		ff.write((char*)&s1[i],sizeof(s1[i]));

	ff.seekp(sizeof(stu)*2); //���ļ�ָ�붨λ����3�ſγ�
	ff.read((char*)&s2,sizeof(stu));
	cout<<s2.course<<"   "<<s2.score<<endl;

	ff.seekp(sizeof(stu)*0);  //���ļ�ָ�붨λ����1�ſγ�
	ff.read((char*)&s2,sizeof(stu));
	cout<<s2.course<<"   "<<s2.score<<endl;

	ff.seekp(sizeof(stu)*1,ios::cur); //���ļ�ָ�붨λ����ǰ�γ̵���һ�ſγ�
	ff.read((char*)&s2,sizeof(stu));
	cout<<s2.course<<"   "<<s2.score<<endl;

	ff.close();
	return 0;
}
