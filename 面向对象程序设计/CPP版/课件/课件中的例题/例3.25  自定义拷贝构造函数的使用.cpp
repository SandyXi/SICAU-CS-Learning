//��3.25  �Զ��忽�����캯����ʹ�á�
#include<iostream>
using namespace std;
class Point	
{
public:
	Point(int a,int b)                                   
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
private:   
	int x,y;  
};
int main()
{   
	Point p1(30,40);     
	Point p2(p1);          //���뷨���ÿ������캯�� 
    p1.print();
	p2.print();
    return 0;    
} 
