//例7.14  将例7.13以二进制形式存放在磁盘文件中的数据（两门课程的课程名和成绩）读入内存，并在显示器上显示

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

	ifstream in("f4.dat",ios::binary);  //定义输入文件流对象in，打开二进制文件f4.dat
	if(!in)   //如果打不开fout返回0值
	{
		cout<<"文件打不开i！"<<endl;
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
