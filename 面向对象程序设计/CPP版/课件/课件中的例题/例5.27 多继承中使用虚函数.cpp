//��5.27 ��̳���ʹ���麯��
#include<iostream>
using namespace std;
class Base1 //�������Base1
{		          
public:
  virtual void fun()          //�����麯��
  {
	  cout<<" ---Base1----"<<endl;
  }  
};

class Base2 //�������Base2
{		          
public:
  void fun()          //fun()��ͨ����
  {
	  cout<<" ---Base2----"<<endl;
  }  
};

class Derived:public Base1, public Base2 //����������Derive
{  public:
      void fun()
      {cout<<"---Derived---"<<endl;}  
};

int main()
{
	Base1 *ptr1; //����1ָ��
	Base2 *ptr2; //����2ָ��
	Derived obj3;  //���������
	
	ptr1=&obj3; 
	ptr1->fun();  //fun()Ϊ�麯����������������麯��

	ptr2=&obj3;
	ptr2->fun(); //fun()Ϊ��ͨ���������û���Base2�ĺ���

}