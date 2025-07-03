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

	cout<<"�������ַ������Իس�����������ǰ������"<<endl;
    init();
	beforecreat();
	display(head);
	del(head);


	cout<<"�������ַ������Իس������������������"<<endl;
	init();
	aftercreat();
	display(head);
	delhead(head);

	cout<<"�������ַ������Իس�������������ͷ�ڵ�ĺ������"<<endl;
	init();
	headaftercreat();
	dis(head);


    cout<<"��ֵΪx���½����뵽��ͷ���ĵ�����head�ĵ�i������λ����"<<endl;
	cout<<"����һ���ַ����Ͳ���λ��i��"<<endl;
    cin>>ch>>i;
    insert(head,ch,i); 
	dis(head);

    cout<<"ɾ����ͷ���ĵ�����ĵ�i�����"<<endl;
	cout<<"����λ��i��"<<endl;
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
    Link *s; //ͷָ�롢����ָ��
	ch=getchar();    //�����1���ַ�
	while(ch!='\n')
    { s=new Link;  //�����½��
	  s->data=ch; //����������ݷ����½�����������
	  s->next=head;
	  head=s;
	  ch=getchar(); //������һ�ַ�
	}
} 

void aftercreat()
{
     char ch;
     Link *s,*r;  //����ָ��
	 ch=getchar();  //�����1���ַ�
     while(ch!='\n')
	 {
         s=new Link;   //�����½��
         s->data=ch; //����������ݷ����½�����������
		 s->next=NULL;
         if(head==NULL) head=s;   //�½�����ձ�
           else r->next=s;   //���½��嵽*r֮��
         r=s;  //βָ��ָ���±�β
         ch=getchar();  //������һ�ַ�
     }   //endwhile
} 

void headaftercreat()//��β�巨������ͷ���ĵ�����
{        
	char ch;Link *headnode;
    headnode=new Link;  //����ͷ���
    headnode->next=NULL;
	Link *s,*r;   //����ָ��
    head=headnode;// βָ���ֵҲָ��ͷ���
    r=headnode;
	while((ch=getchar())!='\n')
	{
       s=new Link;//�����½��
       s->data=ch;   //����������ݷ����½�����������
       s->next=NULL;
	   r->next=s;
       r=s;
    }    
} 

void insert(Link *h,char x,int i)  //��ֵΪx���½����뵽��ͷ���ĵ�����head�ĵ�i������λ����
{
   Link *p,*s;
   p=GetNode(h,i-1);//Ѱ�ҵ�i-1�����
   if(p==NULL)  //i<1��i>n+1ʱ����λ��i�д�
   {
	   cout<<"����λ�ô���!"<<endl;
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

Link * GetNode(Link *h,int m)  //�����λ�õ�ǰһ���ڵ�
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

int length(Link *h)  //������ĳ���
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


void Delete(Link *h,int i) //ɾ����ͷ���ĵ�����head�ϵĵ�i�����
{
   Link *p,*r;
   p=GetNode(head,i-1);   //�ҵ���i-1�����
   if (p==NULL||p->next==NULL)  //i<1��i>nʱ��ɾ��λ�ô�
   {
	   cout<<"����λ��!"<<endl;
	   exit(-1); //�˳���������
   }else 
	{

       r=p->next;   //ʹrָ��ɾ���Ľ��ai
       p->next=r->next;  //��ai������ժ��
       delete r;   //�ͷŽ��ai�Ŀռ���洢��
   }
} 


void del(Link *h)  //ɾ��û��ͷ���������ͷ���ռ�
{
	Link *q,*r;
	q=h;
	while(q->next!=NULL)
	{
		r=q->next;
		delete q;
		q=r;
	}
	cout<<"�����н��Ĵ洢�ռ��Ѿ�ɾ���ˣ�"<<endl;
}

void delhead(Link *h)  //ɾ����ͷ���������ͷ���ռ�
{
	Link *q,*r;
	q=h->next;
	while(q!=NULL)
	{
		r=q->next;
		delete q;
		q=r;
	}
	cout<<"�����н��Ĵ洢�ռ��Ѿ�ɾ���ˣ�"<<endl;
}


void display(Link *h)  //��ʾû�д�ͷ�ڵ������
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

void dis(Link *h)  //��ʾ����ͷ�ڵ������
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