#include <iostream.h>
 #include <string.h>
 #include <stdlib.h>
 #include <iomanip.h>
 typedef struct Node   //定义一个结点结构类型
 {  int num;
    char name[10];
    struct Node *next;
 } stNode;
 stNode *head;	//将头指针设为全局变量   
 void initStLink()	//初始化链表
 { head=NULL;
 }
void CreateStLink()  //创建循环链表
    { int num;
	  stNode *p,*s;
      char name[10]; 
      while(1)
      { s=new stNode;
        if(!s) {cout<<"\nApplition Memory falied!\n";
                   exit(-1);}
        cout<<"Input num,name:\n";
        cin>>num>>name;  if(num==0) break;
        s->num=num;
		strcpy(s->name,name); 
        if(!head) head=s;
                 else  p->next=s;
        p=s; 
	  }
      p->next=head; 
	  delete s;
     }
void dispStLink()	//输出链表信息
    {stNode *p=head;
     cout<<setw(6)<<"num";
     cout<<setw(12)<<"name";
     cout<<endl;
     do
     { cout<<setw(6)<<p->num;
       cout<<setw(12)<<p->name;
       cout<<endl;
       p=p->next;
      }while(p!=head);
     }

stNode *find() //报数为5的人出队列
{
	stNode *p,*k,*q;
	int i;
	p=head;q=head;
	while(p->next!=p)
	{
		for(i=0;i<4;i++)
		{
			q=p;
			p=p->next;
		}
		k=p;
		q->next=p->next;
		p=q->next;
		delete k;
	}
	return p;
}

void main()
   { 
		stNode *m; int k;
		initStLink();
		CreateStLink();
        dispStLink();
		m=find();
		k=m->num;
		cout<<"余下的人为第"<<k<<"个"<<endl;
		cout<<"姓名："<<m->name<<endl;;

   }





