//��4.2  ���м̳еķ���    
#include<iostream>
using namespace std;

class Base
{	 
public:	 
	 Base(int m, int n)
	{
		x=m;
		y=n;
	}

	void showxy( )
	{
		cout<<"x=  "<<x<<endl;   //���ԣ�
		cout<<"y=  "<<y<<endl;
	}
private:       
	int x;  //
protected:   
	int y;  
};

class Derive: public Base  
{
public:
	Derive(int m, int n, int l):Base(m,n)
	{
		z=l;
	}

    void showxyz( ) 
    {    
		cout<<"x=  "<<x<<endl;   //���ԣ�
		//showx();
		cout<<"y=  "<<y<<endl;
		cout<<"z=  "<<z <<endl;     
	}
private:
     int z;        
};              
int main()
{
	Derive ob(3,5,7);
	ob.showxyz();
}