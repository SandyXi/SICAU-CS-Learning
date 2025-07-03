#include<iostream>	
using namespace std; 
class X{
public:
   X(int sa)  //基类X的构造函数
   {
	   a=sa;
   }
   int getX()
   {
	   return a;
   }
   ~X()    //基类X的析造函数
   {
	   cout<<"X_Destructor called."<<endl;
   }
private:
       int a;
};
class Y{
public:
   Y(int sb)  //定义基类Y的构造函数
   {
	   b=sb;
   }
   int getY()
   {
	   return  b;
   }
   ~Y()   //基类Y的析造函数
   {
	   cout<<"Y_Destructor called."<<endl;
   }
private:
       int b;
};
class Z : public X, private Y{  //类Z为基类X和基类Y共同的派生类
public:
	Z(int sa, int sb, int sc):X(sa),Y(sb)  //派生类Zde构造函数，缀上基类X和Y的构造函数
   {
	   c=sc;
   }
   int getZ()
   {
	   return c;
   }
   int getY()
   {
	   return Y::getY();
   }
   ~Z()   //派生类Z的析构函数
   {
		cout<<"Z_Destructor called."<<endl;
   }
   private:
       int c;  
};
int main()
{
	Z obj(2,4,6);
	int ma=obj.getX();
	cout<<"a="<<ma<<endl;
	int mb=obj.getY();
	cout<<"b="<<mb<<endl;
	int mc=obj.getZ();
	cout<<"c="<<mc<<endl;
	return 0;
}




