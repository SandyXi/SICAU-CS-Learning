//例3.27  调用拷贝构造函数的3种情况
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
	Point(const Point& p)                              
	{ 
		x=2*p.x;  
		y=2*p.y; 		   
		cout<<"Using copy constructor\n";
	}
    void print()
	{  
		cout<<x<<"  "<<y<<endl; 
	}
	~Point()
	{
		cout<<"Using destructor\n";
	}
private:
	int x,y;  
};

Point fun(Point p)
{ 
	p.print();
	int a=6,b=9;
	Point r(a,b);
	return r;
}


int main()
{   
	Point p1(30,40); 
	Point p2;        
	Point p3(p1);
	p2=fun(p3);
	p2.print();
	return 0;
} 
