//��3.15  �ò��������ʹ�1�������Ĺ��캯�����������鸳ֵ
#include<iostream>
using namespace std;

class exam 
{
public:
	exam()   
	{ 
		x=123;
	}
	exam (int n)  
	{ 
		x=n; 
	}
	int get_x()  
	{ 
		return x;
	}
private:
	int x; 
};
int main()
{ 	
	exam ob1[4]={11,22,33,44};
	exam ob2[4]={55,66};
	for (int i=0;i<4;i++) 
		cout<<ob1[i].get_x()<<"  ";
    cout<<endl;
    for (i=0;i<4;i++)
		cout<<ob2[i].get_x()<<"  " ;
    cout<<endl;
    return 0 ;
}
