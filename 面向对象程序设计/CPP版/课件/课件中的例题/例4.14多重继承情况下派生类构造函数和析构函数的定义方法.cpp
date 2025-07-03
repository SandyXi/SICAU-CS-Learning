#include<iostream>	
using namespace std; 
class X{
public:
   X(int sa)  //����X�Ĺ��캯��
   {
	   a=sa;
   }
   int getX()
   {
	   return a;
   }
   ~X()    //����X�����캯��
   {
	   cout<<"X_Destructor called."<<endl;
   }
private:
       int a;
};
class Y{
public:
   Y(int sb)  //�������Y�Ĺ��캯��
   {
	   b=sb;
   }
   int getY()
   {
	   return  b;
   }
   ~Y()   //����Y�����캯��
   {
	   cout<<"Y_Destructor called."<<endl;
   }
private:
       int b;
};
class Z : public X, private Y{  //��ZΪ����X�ͻ���Y��ͬ��������
public:
	Z(int sa, int sb, int sc):X(sa),Y(sb)  //������Zde���캯����׺�ϻ���X��Y�Ĺ��캯��
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
   ~Z()   //������Z����������
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




