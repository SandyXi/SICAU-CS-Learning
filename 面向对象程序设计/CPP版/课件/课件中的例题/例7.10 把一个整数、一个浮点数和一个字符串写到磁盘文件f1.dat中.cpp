//例7.10 把一个整数、一个浮点数和一个字符串写到磁盘文件f1.dat中

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout("f1.dat",ios::out);
	if(!fout)
	{
		cout<<"文件打不开i！"<<endl;
		return 1;
	}
	fout<<10<<"  "<<123.456<<endl;
	fout<<"This is a text file."<<endl;
	fout.close();
}
