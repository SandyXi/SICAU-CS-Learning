//��3.14  ��ֻ��1�������Ĺ��캯�����������鸳ֵ
#include<iostream>
using namespace std;
class exam
{
public:
	exam(int n)
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
	exam ob[4]={11,22,33,44};
	for (int i=0;i<4;i++) 
		cout<<ob[i].get_x()<<" ";
        cout<<endl;
	return 0;  
}
