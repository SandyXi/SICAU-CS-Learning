#include <iostream> 
#include<string>  
using namespace std;

class Data_rec
{
public:
	Data_rec(string name1,char sex1,int age1)//构造函数
	{
		name=name1;
		sex=sex1;
		age=age1;
	}
protected:
	string name;  //姓名
	char sex;  //性别
	int age;  //年龄
};

class Student:virtual public Data_rec  //声明Data_rec是Student的虚基类
{
public:
	Student(string name1,char sex1,int age1,string major1,double score1):Data_rec(name1,sex1,age1)    //构造函数
	{
		major=major1;
		score=score1;
	}
protected:
	string major;  //专业
	double score;   //成绩
};

class Employee:virtual public Data_rec  //声明Data_rec是Employee的虚基类
{
public:
	Employee(string name1,char sex1,int age1,string dept1,double salary1):Data_rec(name1,sex1,age1)    //构造函数
	{
		dept=dept1;
		salary=salary1;
	}
protected:
	string dept;  //部门
	double salary;   //酬金
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
	E_Student  obj("张大明",'f',35,"计算机",95,"教务处",3500);
    obj.print();
    return  0; 
}