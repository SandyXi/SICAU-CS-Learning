#include <iostream> 
using namespace std;

class myclass 
{
public: 
	char name[10];
    int  no;   
} a ;  //����ȫ�ֶ���

void main ( )
{
	cout<<a.name<<" ,  "<<a.no<<endl;
    myclass b;
    cout<<b.name<<"  ,  "<<b.no<<endl; 
} 
