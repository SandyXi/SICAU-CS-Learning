//C++��ָ�������Ķ�ά����Ӧ��
#include<iostream>
using namespace std;
int main()
{
	int m;
    cout<<"�����붯̬���鳤�ȣ�"<<endl;
	cin>>m;
	int (*p)[4] = new int[m][4];

    for(int i=0;i<m;i++)
	{
		cout<<"�����붯̬�����"<<i<<"��Ԫ��"<<endl;
		for(int j=0;j<4;j++)
			cin>>p[i][j];       //cin>>*(*(p+i)+j);
	}

    cout<<"�������Ԫ��"<<endl;
    for(int i=0;i<m;i++)
	{
		for(int j=0;j<4;j++)
			cout<<p[i][j]<<"  ";  //cout<<*(*(p+i)+j)<<" ";
		cout<<endl;
	}

	delete []p;

	return 0;
}
