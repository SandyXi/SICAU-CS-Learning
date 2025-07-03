#include<iostream>
/*定义二维数组方式：
  1、 int (*p)[N] = new int [][N]  其中N必须为常量
  2、 数组长度是变量的，如下：
*/
using namespace std;

int main( )
{
	int m,n,i,j;
	cout<<"请输入二维数组行数："<<endl;
	cin>>m;
	cout<<"请输入二维数组列数："<<endl;
	cin>>n;
	int **p;
	p=new int*[m];
	for (i = 0; i<m; i++)
	{
		 p[i] = new int[n];
		 cout<<"请请输入数组"<<i<<"行元素"<<endl;
		 for(j=0;j<n;j++)
		{		
			cin>>p[i][j];
		}
	}

	cout<<"输出二维数组元素："<<endl;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<p[i][j]<<"  ";
		}
		cout<<endl;
	}
    for(i = 0; i <m; i++)
	{
		delete[] p[i];
	}
    delete[] p;                     
	return 0;
}