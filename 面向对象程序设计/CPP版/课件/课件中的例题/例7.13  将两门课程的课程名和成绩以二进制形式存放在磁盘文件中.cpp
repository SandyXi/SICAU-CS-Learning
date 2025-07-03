//例7.13  将两门课程的课程名和成绩以二进制形式存放在磁盘文件中

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
		cout<<"请输入第"<<i+1<<"个成员：课程名  成绩"<<endl;
		cin>>s1[i].course;
		cin>>s1[i].score;
	}
	ofstream out("f4.dat",ios::binary);  //定义输出文件流对象out，打开二进制文件f4.dat
	if(!out)   //如果打不开fout返回0值
	{
		cout<<"文件打不开i！"<<endl;
		exit(1);
	}
	for(i=0;i<3;i++)
	{
		out.write((char*)&s1[i],sizeof(s1[i]));
	}
	out.close();
	return 0;
}
