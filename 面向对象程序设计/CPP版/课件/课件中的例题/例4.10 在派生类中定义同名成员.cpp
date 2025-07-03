#include<iostream>	
#include<string>
using namespace std; 
class Student {     //声明基类Student
public:
	Student(int number1,string name1,float score1)   //声明基类构造函数
	{
		number=number1;
		name=name1;
		score=score1;
	}
	void print()
	{
		cout<<"学号："<<number<<endl;
		cout<<"姓名："<<name<<endl;
		cout<<"成绩："<<score<<endl;
	}
protected:
	int number;  //学号
	string name;   //姓名
	float score;   //成绩
};
class UStudent:private Student{      //声明派生类UStudent
public:
	UStudent(int number1,string name1,float score1,string major1):Student(number1,name1,score1)
	{                                 //定义派生类构造函数
		major=major1;
	}
	void print()           //在派生类中重新定义了成员函数print
	{
		Student::print();   //调用基类Student的成员print()
		cout<<"专业："<<major<<endl;
	}
private:
	string major;  //专业
};
int main()
{
	UStudent stu(2001,"张志",95,"信息安全");
	stu.print();   //调用派生类的成员print()
	return 0;
}


