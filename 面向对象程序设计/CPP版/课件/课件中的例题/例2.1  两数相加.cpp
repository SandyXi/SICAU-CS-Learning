//��2.1  �������
#include<iostream>
using namespace std;
int add(int a, int b);   // ����ԭ������
int main()         // ������
{   int x, y, sum;   // �����������ͱ� ��
	cout<<"����������������"<<endl;
	cin>>x;                         // �Ӽ����������x��ֵ
	cin>>y;                         // �Ӽ����������y��ֵ
	sum=add(x, y);            // ���ú���add,
	cout<<"�ͣ�"<<sum<<endl;
	return  0 ;
}
int add (int a, int b)   //���庯��
{
	int c;
	c=a+b;
	return c;
}
