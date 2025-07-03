//例7.4  成员函数进行格式控制

#include<iostream>
using namespace std;

int main()
{
	cout<<"----------1----------"<<endl;
	cout.width(10);
	cout<<123<<endl;
     
	cout<<"----------2----------"<<endl;
	cout<<123<<endl;

	cout<<"----------3----------"<<endl;
	cout.fill('&');
	cout.width(10);
	cout<<123<<endl;

	cout<<"----------4----------"<<endl;
	cout.setf(ios::left);
	cout.width(10);
	cout<<123<<endl;
	cout<<5689<<endl;
	
	cout<<"----------5----------"<<endl;
	cout.precision(4);
	cout<<123.456789<<endl;

	cout<<"----------6----------"<<endl;
	cout.setf(ios::fixed);
	cout<<123.456789<<endl;

	cout<<"----------7----------"<<endl;
	cout.width(15);
	cout.unsetf(ios::fixed);
	cout.setf(ios::scientific);
	cout<<123.456789<<endl;

	cout<<"----------8----------"<<endl;
	int a=21;
	cout.setf(ios::showbase);
	cout.unsetf(ios::dec);
	cout.setf(ios::hex);
	cout<<a<<endl;
	

	return 0;
}