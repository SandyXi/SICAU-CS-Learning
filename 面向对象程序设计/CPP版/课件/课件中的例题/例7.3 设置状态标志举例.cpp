//��7.3 ����״̬��־����
#include<iostream>
using namespace std;

int main()
{
	cout.setf(ios::showpos|ios::scientific);
	cout<<567<<endl;
	cout<<567.89<<endl;
	cout.unsetf(ios::scientific);
	cout<<567<<endl;
	cout<<567.89<<endl;
	cout.unsetf(ios::showpos);
	cout<<567<<endl;
	cout<<567.89<<endl;
	return 0;
}