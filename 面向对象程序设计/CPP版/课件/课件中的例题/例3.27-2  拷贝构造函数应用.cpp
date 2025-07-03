//例3.27-2  拷贝构造函数应用
#include<iostream>
using namespace std;
class Student 
{
	char *name;	
	float score;
public:
	Student(char* name1, float score1);
	~Student( );
    Student(Student &s);

};

Student::~Student()
{ 	
	cout<<"destructing..."<<name<<endl;
	name[0]='\0';
	delete [ ]name;  
}
Student::Student(char* name1, float score1)
{	
	cout<<"constructing..."<<name1<<endl;
	name=new char[strlen(name1)+1];
	if (name !=0) 	
	{
		strcpy(name, name1);
		score=score1;  
	}
}
Student::Student(Student& stu) //拷贝构造函数
{
	cout<<"copy constructing..."<<stu.name<<endl;
	name=new char[strlen(stu.name)+1];
	if (name !=0)  
	{
	 strcpy(name, stu.name);
	 score=stu.score; 	
	}
}


int main() 
{
	Student stu1("liming", 90);
	Student stu2=stu1;   
	//system("pause");
	return 0;
}
