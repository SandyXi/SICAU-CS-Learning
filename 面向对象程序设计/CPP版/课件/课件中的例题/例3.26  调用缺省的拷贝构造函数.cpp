//��3.26  ����ȱʡ�Ŀ������캯����
#include<iostream>
using namespace std;
class Point	
{
public:
	Point(int a=0,int b=0)                                   
	{ 
		x=a; 
		y=b; 
		cout<<"Using normal constructor\n";
	}
	void print()
	{  
		cout<<x<<"  "<<y<<endl; 
	}
private:
	int x,y;  
};
int main()
{   
	Point p1(30,40);     
	Point p2(p1);        
	 p1.print();
	 p2.print();
	 Point p3=p1;
	 p1.print();
	 p3.print();
     return 0; 
}                     
