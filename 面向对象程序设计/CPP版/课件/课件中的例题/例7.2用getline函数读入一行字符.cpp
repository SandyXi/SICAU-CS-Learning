//例7.2用getline函数读入一行字符
#include<iostream>
using namespace std;
int main()
{
	char line[20];
	cout<<"输入一行字符："<<endl;
	cin.getline(line,20,'t');
	cout<<line;
	return 0;
}