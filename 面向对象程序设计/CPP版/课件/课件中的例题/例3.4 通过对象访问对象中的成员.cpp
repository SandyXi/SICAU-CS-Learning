//例3.4 通过对象访问对象中的成员
#include<iostream>
using namespace std;
class Point
 { 
public:
	void setPoint(int a,int b)
    {   
		x=a; 
		y=b; 
	}

	int getx()
    {     
		return x; 
	}

    int gety()
	{ 
		return y; 
	}
private:
	int x,y; 
};

void main()
{   
	Point op1,op2;
	int i,j;
    op1.setPoint(1,2); 
    op2.setPoint(5,6); 
    i=op1.getx();            
    j=op1.gety(); 
	cout<<"op1 i= "<<i<<"  op1  j= "<<j<<endl;
    i=op2.getx(); 
    j=op2.gety();            
	cout<<"op2 i= "<<i<<"  op2 j= "<<j<<endl;
}
