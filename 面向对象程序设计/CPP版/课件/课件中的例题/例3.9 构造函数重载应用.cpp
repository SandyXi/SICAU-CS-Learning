//��3.9 ���캯������Ӧ��
//���캯��������Ҳ��ͨ������ʱ�Ĳ������������������֡�
#include <iostream>
using namespace std;
class Date
{
public:     
	Date();  //�����������캯��
    Date(int y,int m,int d);   //�������������캯��                
    void showDate();
private:
    int year, month, day;  
};

Date::Date()   
{ 
	year=1998;  
	month=4; 
	day=28;
	cout<<"���в����������캯��Date(); "<<endl;
}
Date::Date( int y, int m, int d) 
{   
	year=y;  
	month=m;  
	day=d;
	cout<<"���д������������캯��(int y,int m,int d);  "<<endl;
}
inline void Date::showDate()
{  
	cout<<year<<"."<<month<<"."<<day<<endl; 
}

int main()
{
  Date date1; //�������
  cout<<"date1 output:"<<endl;
  date1.showDate();

  Date date2(2002,11,14); //�������
  cout<<"date2 output:"<<endl;
  date2.showDate();

  return 0;
}