//��7.2��getline��������һ���ַ�
#include<iostream>
using namespace std;
int main()
{
	char line[20];
	cout<<"����һ���ַ���"<<endl;
	cin.getline(line,20,'t');
	cout<<line;
	return 0;
}