//��3.28  ĩ���徲̬���ݳ�Ա��������
#include<iostream>
#include<string.h>
using namespace std;

class Student
{
public:
    Student(char *name1,char *stu_no1,float score1);
	~Student();
    void show();                           // ���������ѧ�źͳɼ�
    void show_count_sum_ave();   // ����������ܳɼ���ƽ���ɼ�
private:
    char *name;         // ѧ������
    char *stu_no;       // ѧ��ѧ��
    float score;        // ѧ���ɼ�
    static int count;         // ͳ��ѧ������
    static float sum;        // ͳ���ܳɼ�
    static float ave;        // ͳ��ƽ���ɼ�
};

Student::Student(char *name1,char *stu_no1,float score1 )
{
    name=new char[strlen(name1)+1];
    strcpy(name,name1);
    stu_no=new char[strlen(stu_no1)+1];
    strcpy(stu_no,stu_no1);
    score=score1;
    ++count;                        // �ۼ�ѧ������
    sum=sum+score;           // �ۼ��ܳɼ�
    ave=sum/count;             // ����ƽ���ɼ�
}
Student::~Student()
{
	delete []name;
    delete []stu_no;
}
void Student::show()
{
    cout<<"����:"<<name<<endl;
    cout<<"ѧ��:"<<stu_no<<endl;
    cout<<"�ɼ�:"<<score<<endl;
}

void Student:: show_count_sum_ave()
{
    cout<<"ѧ������:"<<count<<endl;
    cout<<"�ۼӳɼ�:"<<sum<<endl;
    cout<<"ƽ���ɼ�:"<<ave<<endl;
}

int Student::count=0;                    // ��̬��Աcount��ʼ��
float Student::sum=0.0;                // ��̬��Աsum��ʼ��
float Student::ave=0.0;                 // ��̬��Աave��ʼ��

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
