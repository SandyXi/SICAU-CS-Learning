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
class UStudent:public Student{      //����������UStudent
public:
	UStudent(int number1,string name1,float score1,int number2,string name2,float score2,int number3,string name3,float score3,string major1):Student(number1,name1,score1),auditor2(number3,name3,score3),auditor1(number2,name2,score2)   
	{                                 //���������๹�캯��
		major=major1;
	}
	void print()
	{
		cout<<"��ʽ���ǣ�"<<endl;
		Student::print();
		cout<<"רҵ��"<<major<<endl;
	}
	void print_auditor1()
	{
		cout<<"�������ǣ�"<<endl;
		auditor1.print();
	}
	void print_auditor2()
	{
		cout<<"�������ǣ�"<<endl;
		auditor2.print();
	}
private:
	string major;  //רҵ
	Student auditor1;    //��������Ա1����������
	Student auditor2;   //��������Ա2����������
};
int main()
{
	UStudent stu(2001,"��־",95,3001,"�����",66,3002,"��ٻٻ",50,"��Ϣ��ȫ");
	stu.print();
	stu.print_auditor1();
	stu.print_auditor2();
	return 0;
}


