#include<iostream>	
using namespace std; 
class X{
public:
   void setX(int x)
   {
	   a=x;
   }
   void showX()
   {
	   cout<<"a="<<a<<endl;
   }
private:
       int a;
};
class Y{
public:
   void setY(int x)
   {
	   b=x;
   }
   void showY()
   {
	   cout<<"b="<<b<<endl;
   }
private:
       int b;
};
class Z : public X, private Y{
public:
   void setZ(int x, int y, int z)
   {
	   setX(x);
	   setY(y);
	   c=z;
   }
   void showZ()
   {
	   showX();
	   showY();
	   cout<<"c="<<c<<endl;
   }
   private:
       int c;  
};
int main()
{
	Z obj;
	obj.setX(3);   //��ȷ
	obj.showX();   //��ȷ
	obj.setY(4);    //����
	obj.showY();     //����
	obj.setZ(5,6,7);
	obj.showZ();
	return 0;
}




