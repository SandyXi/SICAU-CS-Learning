//例4.1 私有继承的访问规则
#include <iostream> 
using namespace std;

class Base
{	 
public:	 
  void seta (int sa)
  { 
	  a=sa;
  }
  void showa( )
  {
	  cout<< "a= "<<a<<endl;
  }
protected:      
  int  a;        
};

class Derive1: private Base  
{
public:
    void setab(int sa, int sb)
	{ 
		a=sa; 
		b=sb;
	}
    void showab( ) 
	{ 
		cout<< "a= "<<a<<endl;  //对吗？
        cout<< "b= "<<b<<endl;
	}
protected: 
	int  b;               
};

class Derive2: private Derive1 
{
public:
	void setabc(int sa, int sb, int sc)
	{  
		setab(sa, sb); 
		c=sc;
	}
	void showabc( )  
	{ 
     cout<<"a=  "<<a<<endl;     //对吗？ showa()可以吗？
     cout<<"b=  "<<b<<endl;     // showab()可以吗？
     cout<<"c=  "<<c <<endl;
	}

protected:   
	int  c;   
};

int main()
{   
	Base op1;  
	op1.seta(11);   
	op1.showa();
	Derive1 op2;  
	op2.setab(22,33);  
	op2.showab();
	Derive2 op3;  
	op3.setabc(44,55,66);  
	op3.showabc();
	return 0;
}

