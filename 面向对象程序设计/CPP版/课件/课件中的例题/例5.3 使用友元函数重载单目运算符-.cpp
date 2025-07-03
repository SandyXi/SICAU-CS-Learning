//例5.3：使用友元函数重载单目运算符“-”
#include<iostream.h>
class Coord
{  
	int a,b;
public:
     Coord(int x=0,int y=0) //构造函数
     { 
		 a=x; 
		 b=y;
	 }
	 friend Coord operator-(Coord obj); //重载单目运算符负号"－"的声明
	 void show(); 
};

Coord operator-(Coord obj)    //重载单目运算符负号"－"的实现
{
	obj.a=-obj.a;
	obj.b=-obj.b;
	return obj;
}

void Coord::show()
{
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
}
void main()
{
	Coord t1(2,15),t2;
	cout<<"输出对象t1中的数据成员："<<endl;
	t1.show();
	t2=-t1;
	cout<<"输出对象t1取反后（t2=-t1）的数据成员："<<endl;
	t2.show();
}

