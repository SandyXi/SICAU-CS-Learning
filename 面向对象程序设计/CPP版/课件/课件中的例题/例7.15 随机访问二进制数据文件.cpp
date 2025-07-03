//例7.15 随机访问二进制数据文件

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

	fstream ff("f6.dat",ios::in|ios::out|ios::binary);  //定义输入文件流对象in，打开二进制文件f4.dat
	if(!ff)   //如果打不开fout返回0值
	{
		cout<<"文件打不开i！"<<endl;
		exit(1);
	}
	for(i=0;i<3;i++)  //将3门课程写入文件
		ff.write((char*)&s1[i],sizeof(s1[i]));

	ff.seekp(sizeof(stu)*2); //将文件指针定位到第3门课程
	ff.read((char*)&s2,sizeof(stu));
	cout<<s2.course<<"   "<<s2.score<<endl;

	ff.seekp(sizeof(stu)*0);  //将文件指针定位到第1门课程
	ff.read((char*)&s2,sizeof(stu));
	cout<<s2.course<<"   "<<s2.score<<endl;

	ff.seekp(sizeof(stu)*1,ios::cur); //将文件指针定位到当前课程的下一门课程
	ff.read((char*)&s2,sizeof(stu));
	cout<<s2.course<<"   "<<s2.score<<endl;

	ff.close();
	return 0;
}
