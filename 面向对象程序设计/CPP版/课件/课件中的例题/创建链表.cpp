#include<iostream>
using namespace std;

struct structNode   //定义一个结点结构类型
{     
	int num;
    char name[10];
    float score;
    structNode *next;
};

structNode *head; //链表的头节点的指针
structNode *pre; //链尾插入节点时需要的链尾指针

structNode *beforeh; //扦插法链表的头节点的指针

void init();//初始化链表
void create();//后插法创建学生链表
void disp();//输出链表
bool IsEmpt(structNode *p); //判断链表是否为空
void beforecreat( );  //前插法创建学生链表
void del();  //回收链表

int main()
{
	cout<<"---后插法创建学生链表---"<<endl;
	init(); 
	create();
	cout<<"---输出后插法创建学生链表---"<<endl;
	disp();
	cout<<"---前插法创建学生链表---"<<endl;
    del(); 
	init();
    beforecreat( );
	cout<<"---输出前插法创建学生链表---"<<endl;
	disp();
	del();
	return 0;
}
void init()
{
	head = new structNode;  
	if(!IsEmpt(head))
	{
		head->next = NULL;  //链表头指针初始化
		pre = head;   //链尾指针初始化
	}
	else
	{
		cout<<"非常遗憾，学生链表创建不成功！\n";
	}	
}
void create() //后插法创建学生链表
{
	structNode *s;//当前节点
	int node;  //学生链表节点个数
	cout<<"请输入创建学生节点的个数： ";
	cin>>node;
	for(int i = 0; i<node; i++)
	{
		s = new structNode;
		if(!IsEmpt(s))  //如果申请成功的话，就建立当前节点,并用输入的数据初始化节点中的成员值
		{ 
			cout<<"请输入第 "<<i+1<<" 个同学的信息！\n";
			cout<<"请输入该学生的学号：";
			cin>>s->num;
			cout<<"请输入该学生的姓名：";
			cin>>s->name;
			cout<<"请输入该学生的成绩：";
			cin>>s->score;
			cout<<endl;	
			s->next = NULL;
		}			
		pre->next=s;//当前节点插入链表
		pre=s; //修改链尾指针，始终指向链表最后一个节点
		
	}	
}
void disp()
{
	cout<<"输出链表中节点的内容"<<endl;
	int i = 0;
	structNode *p = head->next;  //p作为遍历链表的指针
	while(p != NULL)
	{
		cout<<"请输出第 "<<++i<<" 个同学的信息！\n";
		cout<<"请输出该学生的学号：";
		cout<<p->num;
		cout<<"\n请输出该学生的姓名：";
		cout<<p->name;
		cout<<"\n请输出该学生的成绩：";
		cout<<p->score;
		cout<<endl;		
		p=p->next;  //遍历链表时必须要后移遍历指针
	}
}
bool IsEmpt(structNode *p)
{
	if(p==NULL)
		return true;
	else
		return false;
}



void beforecreat( )  //前插法创建学生链表
 {   
    int m; //节点个数
	cout<<"请输入创建学生节点的个数： ";
    cin>>m;
    structNode *s;    //当前节点工作指针
    for(int i = 0; i<m; i++)
    { 
		s=new structNode;  //生成新结点
        //处理学生信息节点
		if(!IsEmpt(s))  //如果申请成功的话，就建立当前节点,并用输入的数据初始化节点中的成员值
		{ 
			cout<<"请输入第 "<<i+1<<" 个同学的信息！\n";
			cout<<"请输入该学生的学号：";
			cin>>s->num;
			cout<<"请输入该学生的姓名：";
			cin>>s->name;
			cout<<"请输入该学生的成绩：";
			cin>>s->score;
			cout<<endl;	
			s->next = NULL;
		}			
        s->next=head->next;
        head->next =s;
     } 
 }

void del()  //回收链表
{
	 structNode *s;    //当前节点工作指针
	 s=head->next;
	 while(s!=NULL)
	 {
		 head->next=s->next;
		 delete s;
		 s=head->next;
	 }
	 delete head;
}