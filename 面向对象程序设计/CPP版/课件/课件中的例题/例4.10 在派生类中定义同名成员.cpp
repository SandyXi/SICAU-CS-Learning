#include<iostream>	
#include<string>
using namespace std; 
class Student {     //��������Student
public:
	Student(int number1,string name1,float score1)   //�������๹�캯��
	{
		number=number1;
		name=name1;
		score=score1;
	}
	void print()
	{
		cout<<"ѧ�ţ�"<<number<<endl;
		cout<<"������"<<name<<endl;
		cout<<"�ɼ���"<<score<<endl;
	}
protected:
	int number;  //ѧ��
	string name;   //����
	float score;   //�ɼ�
};
class UStudent:private Student{      //����������UStudent
public:
	UStudent(int number1,string name1,float score1,string major1):Student(number1,name1,score1)
	{                                 //���������๹�캯��
		major=major1;
	}
	void print()           //�������������¶����˳�Ա����print
	{
		Student::print();   //���û���Student�ĳ�Աprint()
		cout<<"רҵ��"<<major<<endl;
	}
private:
	string major;  //רҵ
};
int main()
{
	UStudent stu(2001,"��־",95,"��Ϣ��ȫ");
	stu.print();   //����������ĳ�Աprint()
	return 0;
}


