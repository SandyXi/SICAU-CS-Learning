//例3.9 构造函数重载应用
//构造函数的重载也是通过调用时的参数个数和类型来区分。
#include <iostream>
using namespace std;
class Date
{
public:     
	Date();  //不带参数构造函数
    Date(int y,int m,int d);   //带三个参数构造函数                
    void showDate();
private:
    int year, month, day;  
};

Date::Date()   
{ 
	year=1998;  
	month=4; 
	day=28;
	cout<<"运行不带参数构造函数Date(); "<<endl;
}
Date::Date( int y, int m, int d) 
{   
	year=y;  
	month=m;  
	day=d;
	cout<<"运行带三个参数构造函数(int y,int m,int d);  "<<endl;
}
inline void Date::showDate()
{  
	cout<<year<<"."<<month<<"."<<day<<endl; 
}

int main()
{
  Date date1; //定义对象
  cout<<"date1 output:"<<endl;
  date1.showDate();

  Date date2(2002,11,14); //定义对象
  cout<<"date2 output:"<<endl;
  date2.showDate();

  return 0;
}