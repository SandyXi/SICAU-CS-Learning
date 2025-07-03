//例2.3   变量的输入和输出
#include <iostream>
using namespace std;
int main()
{
	char name[20];
	int x,y;
	cout<<"输入姓名："<<endl;
	cin>>name;
	cout<<"输入两个整数："<<endl;
	cin>>x>>y;
	cout<<name<<","<<x<<","<<y<<endl;
	return 0;
}

