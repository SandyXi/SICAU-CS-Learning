//例7.1 get函数应用
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"请输入一个字符，以EOF结束（ctrl+z,回车）："<<endl;
	while(cin.get(ch))
		cout.put(ch);
	return 0;
}
