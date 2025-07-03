//例7.11 先建立一个输出文件，向它写入数据，然后关闭文件，在按输入模式打开它，并读取信息

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout("f2.dat",ios::out);  //定义输出文件流对象fout，打开输出文件f2.dat
	if(!fout)   //如果打不开fout返回0值
	{
		cout<<"文件打不开i！"<<endl;
		return 1;
	}
	fout<<"Hello"<<endl;
	fout<<100<<"  "<<hex<<100<<endl;
	fout.close();

	ifstream fin("f2.dat",ios::in);   //定义输入文件流对象fin，打开输入文件f2.dat
	if(!fin)
	{
		cout<<"文件打不开i！"<<endl;
		return 1;
	}
	char str[80];
	int i;
	fin>>str>>i;
	cout<<str<<"   "<<i<<endl;

	fin.close();
	return 0;
}
