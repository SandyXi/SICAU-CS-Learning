//例3.28  末定义静态数据成员的引例。
#include<iostream>
#include<string.h>
using namespace std;

class Student
{
public:
    Student(char *name1,char *stu_no1,float score1);
	~Student();
    void show();                           // 输出姓名、学号和成绩
    void show_count_sum_ave();   // 输出人数、总成绩和平均成绩
private:
    char *name;         // 学生姓名
    char *stu_no;       // 学生学号
    float score;        // 学生成绩
    static int count;         // 统计学生人数
    static float sum;        // 统计总成绩
    static float ave;        // 统计平均成绩
};

Student::Student(char *name1,char *stu_no1,float score1 )
{
    name=new char[strlen(name1)+1];
    strcpy(name,name1);
    stu_no=new char[strlen(stu_no1)+1];
    strcpy(stu_no,stu_no1);
    score=score1;
    ++count;                        // 累加学生人数
    sum=sum+score;           // 累加总成绩
    ave=sum/count;             // 计算平均成绩
}
Student::~Student()
{
	delete []name;
    delete []stu_no;
}
void Student::show()
{
    cout<<"姓名:"<<name<<endl;
    cout<<"学号:"<<stu_no<<endl;
    cout<<"成绩:"<<score<<endl;
}

void Student:: show_count_sum_ave()
{
    cout<<"学生人数:"<<count<<endl;
    cout<<"累加成绩:"<<sum<<endl;
    cout<<"平均成绩:"<<ave<<endl;
}

int Student::count=0;                    // 静态数员count初始化
float Student::sum=0.0;                // 静态数员sum初始化
float Student::ave=0.0;                 // 静态数员ave初始化

int  main()
{
	//cout<<Student::ave<<endl;
    Student stu1("Liming","990201",90);
    stu1.show();
    stu1.show_count_sum_ave();
    Student stu2("Zhanghao","990202",85);
    stu2.show();
    stu2.show_count_sum_ave();
    static int m;
    cout<<m<<endl;

    return 0;
}
