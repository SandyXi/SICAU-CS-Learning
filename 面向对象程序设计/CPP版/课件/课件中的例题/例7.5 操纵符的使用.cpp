//Àı7.5 ²Ù×İ·ûµÄÊ¹ÓÃ
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout<<setw(10)<<123<<567<<endl;
	cout<<123<<setiosflags(ios::scientific)<<setw(20)<<123.456789<<endl;
	cout<<123<<setw(10)<<hex<<123<<endl;
	cout<<123<<setw(10)<<oct<<123<<endl;
	cout<<123<<setw(10)<<dec<<123<<endl;
	cout<<resetiosflags(ios::scientific)<<setprecision(4)<<123.456789<<endl;
	cout<<setiosflags(ios::left)<<setfill('#')<<setw(8)<<123<<endl;
	cout<<resetiosflags(ios::left)<<setfill('$')<<setw(8)<<456<<endl;
	return 0;
}