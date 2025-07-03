//例7.12 将'a' 至'z' 的26个英文字母写入文件，而后从该文件中读出并显示出来

#include<iostream>
#include<fstream>
using namespace std;
int test_write()
{
	ofstream fout("f3.dat",ios::binary);  //定义输出文件流对象fout，打开二进制文件f3.dat
	if(!fout)   //如果打不开fout返回0值
	{
		cout<<"文件打不开i！"<<endl;
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
	ifstream fin("f3.dat",ios::binary);  //定义输入文件流对象fin，打开二进制文件f3.dat
	if(!fin)
	{
		cout<<"文件打不开i！"<<endl;
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
