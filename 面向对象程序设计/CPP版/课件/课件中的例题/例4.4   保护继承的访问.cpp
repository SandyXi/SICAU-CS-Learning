//例4.4   保护继承的访问
#include<iostream> 
using namespace std;
class Base
{	 
public:
	int z;	 
	void setx (int a) 
	{ 
		x=a;
	}
	void showx( ) 
	{   
		cout<< "x=  "<<x<<endl; 
	}
private:       
	int x;
protected:   
	int y;              
};

class Derive: protected Base  
{
public:
    void setall (int a, int b, int c , int d);
    void showall( ) ;
private:
     int m;            
};

void Derive:: setall (int a, int b, int c , int d)
{  
	x=a; // setx (a);
    y=b;
	z=c; 
	m=d;  
}
void Derive:: showall( ) 
{   
	cout<< "x=  "<<x<<endl; //showx();
    cout<< "y=  "<<y<<endl;
    cout<< "z=  "<<z<<endl;
    cout<< "m=  "<<m<<endl;  
}
int main()
{
    Derive obj;
    obj.setall(1,2,3,4);
    obj.showall();
    return 0;  
}

