//例6.10 传统的异常处理方法举例

#include <iostream>
using namespace std;
int Div( int x,int y);

int main()
{	
	cout<<"7/3="<<Div(7,3)<<endl;
	cout<<"5/0="<<Div(5,0)<<endl;
	return 0;
}

int Div( int x,int y)
{	
	if (y==0)	
	{
		cout<<"除数为0,错误!"<<endl;
		exit(0);	
	}
	return x/y;
}
