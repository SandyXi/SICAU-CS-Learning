//��2.22  ʹ�����÷��غ���ֵ
#include<iostream>
using namespace std;
int a[]={1,3,5,7,0};
int& index(int i);
int main()
{
	cout<<index(2)<<endl;
    index(2)=25;
    cout<<index(2)<<endl;
    return 0;
}

int& index(int i)
{
	return a[i];

}

