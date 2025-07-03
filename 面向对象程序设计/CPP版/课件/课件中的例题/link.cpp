#include<iostream.h>
#include<stdio.h>
#include<stdlib.h>

struct Link
{  char data;
   struct Link *next;
};


Link *head;


void init();
void beforecreat();
void display(Link *head);

void aftercreat();
void headaftercreat();
void dis(Link *head);

void insert(Link *head,char x,int i); 
Link * GetNode(Link *h,int m);
int length(Link *h);

void Delete(Link *h,int i);

void del(Link *h);
void delhead(Link *h);

void main()
{
	char ch; int i;

	cout<<"请输入字符串，以回车结束，建立前插链表："<<endl;
    init();
	beforecreat();
	display(head);
	del(head);


	cout<<"请输入字符串，以回车结束，建立后插链表："<<endl;
	init();
	aftercreat();
	display(head);
	delhead(head);

	cout<<"请输入字符串，以回车结束，建立带头节点的后插链表："<<endl;
	init();
	headaftercreat();
	dis(head);


    cout<<"将值为x的新结点插入到带头结点的单链表head的第i个结点的位置上"<<endl;
	cout<<"请输一个字符，和插入位置i："<<endl;
    cin>>ch>>i;
    insert(head,ch,i); 
	dis(head);

    cout<<"删除带头结点的单链表的第i个结点"<<endl;
	cout<<"请输位置i："<<endl;
    cin>>i;
    Delete(head,i);
	dis(head);

	delhead(head);
}

void init()
{
	head=NULL;
}

void beforecreat()  
{   

	char ch;
    Link *s; //头指针、工作指针
	ch=getchar();    //读入第1个字符
	while(ch!='\n')
    { s=new Link;  //生成新结点
	  s->data=ch; //将读入的数据放入新结点的数据域中
	  s->next=head;
	  head=s;
	  ch=getchar(); //读入下一字符
	}
} 

void aftercreat()
{
     char ch;
     Link *s,*r;  //工作指针
	 ch=getchar();  //读入第1个字符
     while(ch!='\n')
	 {
         s=new Link;   //生成新结点
         s->data=ch; //将读入的数据放入新结点的数据域中
		 s->next=NULL;
         if(head==NULL) head=s;   //新结点插入空表
           else r->next=s;   //将新结点插到*r之后
         r=s;  //尾指针指向新表尾
         ch=getchar();  //读入下一字符
     }   //endwhile
} 

void headaftercreat()//用尾插法建立带头结点的单链表
{        
	char ch;Link *headnode;
    headnode=new Link;  //生成头结点
    headnode->next=NULL;
	Link *s,*r;   //工作指针
    head=headnode;// 尾指针初值也指向头结点
    r=headnode;
	while((ch=getchar())!='\n')
	{
       s=new Link;//生成新结点
       s->data=ch;   //将读入的数据放入新结点的数据域中
       s->next=NULL;
	   r->next=s;
       r=s;
    }    
} 

void insert(Link *h,char x,int i)  //将值为x的新结点插入到带头结点的单链表head的第i个结点的位置上
{
   Link *p,*s;
   p=GetNode(h,i-1);//寻找第i-1个结点
   if(p==NULL)  //i<1或i>n+1时插入位置i有错
   {
	   cout<<"插入位置错误!"<<endl;
	   exit(-1);
   }
    else
    {
       s=new Link;
       s->data=x;
       s->next=p->next;
       p->next=s;
	}
}    

Link * GetNode(Link *h,int m)  //求插入位置的前一个节点
{
	Link *p; int l,k;
	l=length(h);
	if((m<0)||(m>l))return NULL;
	   else if (m==0) return h;
	         else
			 {
		       p=h->next;
	           for(k=1;k<m;k++)p=p->next;
		       return p;
			 }
}

int length(Link *h)  //求链表的长度
{
	Link *p; int t=0;
	p=h->next;
	while(p!=NULL)
	{
		    t=t+1;
			p=p->next;
	}
	cout<<"length:"<<t<<endl;
	return t;
	
}


void Delete(Link *h,int i) //删除带头结点的单链表head上的第i个结点
{
   Link *p,*r;
   p=GetNode(head,i-1);   //找到第i-1个结点
   if (p==NULL||p->next==NULL)  //i<1或i>n时，删除位置错
   {
	   cout<<"错误位置!"<<endl;
	   exit(-1); //退出程序运行
   }else 
	{

       r=p->next;   //使r指向被删除的结点ai
       p->next=r->next;  //将ai从链上摘下
       delete r;   //释放结点ai的空间给存储池
   }
} 


void del(Link *h)  //删除没有头结点的链表，释放其空间
{
	Link *q,*r;
	q=h;
	while(q->next!=NULL)
	{
		r=q->next;
		delete q;
		q=r;
	}
	cout<<"链表中结点的存储空间已经删除了！"<<endl;
}

void delhead(Link *h)  //删除有头结点的链表，释放其空间
{
	Link *q,*r;
	q=h->next;
	while(q!=NULL)
	{
		r=q->next;
		delete q;
		q=r;
	}
	cout<<"链表中结点的存储空间已经删除了！"<<endl;
}


void display(Link *h)  //显示没有带头节点的链表
{
	Link *p;
	p=h;
	while(p!=NULL)
	{	
		cout<<p->data;
		p=p->next;
	}
	cout<<endl;
}

void dis(Link *h)  //显示带有头节点的链表
{
	Link *p;
	p=h->next;
	while(p!=NULL)
	{	
		cout<<p->data;
		p=p->next;
	}
	cout<<endl;
}