//��7.1 get����Ӧ��
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"������һ���ַ�����EOF������ctrl+z,�س�����"<<endl;
	while(cin.get(ch))
		cout.put(ch);
	return 0;
}
