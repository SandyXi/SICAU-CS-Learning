//��6.10 ��ͳ���쳣����������

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
		cout<<"����Ϊ0,����!"<<endl;
		exit(0);	
	}
	return x/y;
}
