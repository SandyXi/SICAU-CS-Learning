#include<iostream>
/*�����ά���鷽ʽ��
  1�� int (*p)[N] = new int [][N]  ����N����Ϊ����
  2�� ���鳤���Ǳ����ģ����£�
*/
using namespace std;

int main( )
{
	int m,n,i,j;
	cout<<"�������ά����������"<<endl;
	cin>>m;
	cout<<"�������ά����������"<<endl;
	cin>>n;
	int **p;
	p=new int*[m];
	for (i = 0; i<m; i++)
	{
		 p[i] = new int[n];
		 cout<<"������������"<<i<<"��Ԫ��"<<endl;
		 for(j=0;j<n;j++)
		{		
			cin>>p[i][j];
		}
	}

	cout<<"�����ά����Ԫ�أ�"<<endl;
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