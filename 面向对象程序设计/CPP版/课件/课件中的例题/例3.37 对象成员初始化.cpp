//例3.37 对象成员初始化
#include <iostream>
using namespace std;
class A 
{
private:
	int a1, a2;
public:
	A(int i, int j) 
	{
		a1=i; 
		a2=j;
	}
	void print( ) 
    {
		cout<<a1<<","<<a2<<endl;
	}
};

class B 
{
private:
   A a;  //内嵌对象
   int b;
public:
   B(int i, int j, int k): a(i,j)
   {
	   b=k; 
   }
   void print( );
};
void B::print( ) 
{
	a.print( );
	cout << b << endl;
}
void main( )
{
	B b(3, 4, 5);
	b.print( );
}
