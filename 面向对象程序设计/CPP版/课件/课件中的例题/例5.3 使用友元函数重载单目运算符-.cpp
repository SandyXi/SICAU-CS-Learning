//��5.3��ʹ����Ԫ�������ص�Ŀ�������-��
#include<iostream.h>
class Coord
{  
	int a,b;
public:
     Coord(int x=0,int y=0) //���캯��
     { 
		 a=x; 
		 b=y;
	 }
	 friend Coord operator-(Coord obj); //���ص�Ŀ���������"��"������
	 void show(); 
};

Coord operator-(Coord obj)    //���ص�Ŀ���������"��"��ʵ��
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
	cout<<"�������t1�е����ݳ�Ա��"<<endl;
	t1.show();
	t2=-t1;
	cout<<"�������t1ȡ����t2=-t1�������ݳ�Ա��"<<endl;
	t2.show();
}

