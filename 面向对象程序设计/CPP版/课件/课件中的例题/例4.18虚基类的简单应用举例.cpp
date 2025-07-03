#include <iostream> 
#include<string>  
using namespace std;

class Data_rec
{
public:
	Data_rec(string name1,char sex1,int age1)//���캯��
	{
		name=name1;
		sex=sex1;
		age=age1;
	}
protected:
	string name;  //����
	char sex;  //�Ա�
	int age;  //����
};

class Student:virtual public Data_rec  //����Data_rec��Student�������
{
public:
	Student(string name1,char sex1,int age1,string major1,double score1):Data_rec(name1,sex1,age1)    //���캯��
	{
		major=major1;
		score=score1;
	}
protected:
	string major;  //רҵ
	double score;   //�ɼ�
};

class Employee:virtual public Data_rec  //����Data_rec��Employee�������
{
public:
	Employee(string name1,char sex1,int age1,string dept1,double salary1):Data_rec(name1,sex1,age1)    //���캯��
	{
		dept=dept1;
		salary=salary1;
	}
protected:
	string dept;  //����
	double salary;   //���
};

class E_Student:public Employee,public Student{
public:
	E_Student(string name1,char sex1,int age1,string major1,double score1,string dept1,double salary1)
		:Data_rec(name1,sex1,age1),Student(name1,sex1,age1,major1,score1),Employee(name1,sex1,age1,dept1,salary1)
	{

	}
	void print();
};

void E_Student::print()
{
	cout<<"name:"<<name<<endl;
	cout<<"sex:"<<sex<<endl;
	cout<<"age:"<<age<<endl;
	cout<<"score:"<<score<<endl;
	cout<<"major:"<<major<<endl;
	cout<<"dept:"<<dept<<endl;
	cout<<"salary:"<<salary<<endl;
}

int main()
{      
	E_Student  obj("�Ŵ���",'f',35,"�����",95,"����",3500);
    obj.print();
    return  0; 
}