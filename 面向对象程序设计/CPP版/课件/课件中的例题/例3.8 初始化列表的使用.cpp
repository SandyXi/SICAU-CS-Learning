//例3.8 初始化列表的使用
#include <iostream>
using namespace std;
class D
{
public:
	D(int i):mem2(i),mem1(mem2+1)
	{	
		cout<<"mem1:"<<mem1<<endl;
		cout<<"mem2:"<<mem2<<endl; 
	}
private:
	int mem1;
	int mem2;  
};

int main()
{ 
	D d1(15);
	return 0;
}