//Àı 3.18  thisÖ¸ÕëµÄÒıÀı
#include<iostream>
using namespace std;
class A
{
public:
     A(int x1)
	 { 
		 x=x1; 
	 }
     void disp()
	 { 
		 cout<<"x= "<<x<<endl;
	 }
private:
     int x;   
};

int main()
{   
	A a(1),b(2);
	cout<<" a: "; 
	a.disp();
	cout<<" b: "; 
	b.disp();
  return 0;      
} 
