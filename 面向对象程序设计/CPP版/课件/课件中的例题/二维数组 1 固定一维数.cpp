//C++中指定列数的二维数组应用
#include<iostream>
using namespace std;
int main()
{
	int m;
    cout<<"请输入动态数组长度："<<endl;
	cin>>m;
	int (*p)[4] = new int[m][4];

    for(int i=0;i<m;i++)
	{
		cout<<"请输入动态数组第"<<i<<"行元素"<<endl;
		for(int j=0;j<4;j++)
			cin>>p[i][j];       //cin>>*(*(p+i)+j);
	}

    cout<<"输出数组元素"<<endl;
    for(int i=0;i<m;i++)
	{
		for(int j=0;j<4;j++)
			cout<<p[i][j]<<"  ";  //cout<<*(*(p+i)+j)<<" ";
		cout<<endl;
	}

	delete []p;

	return 0;
}
