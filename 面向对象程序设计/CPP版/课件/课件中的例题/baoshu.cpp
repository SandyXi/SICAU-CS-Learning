#include <iostream.h>
 #include <string.h>
 #include <stdlib.h>
 #include <iomanip.h>
 typedef struct Node   //����һ�����ṹ����
 {  int num;
    char name[10];
    struct Node *next;
 } stNode;
 stNode *head;	//��ͷָ����Ϊȫ�ֱ���   
 void initStLink()	//��ʼ������
 { head=NULL;
 }
void CreateStLink()  //����ѭ������
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
void dispStLink()	//���������Ϣ
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

stNode *find() //����Ϊ5���˳�����
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
		cout<<"���µ���Ϊ��"<<k<<"��"<<endl;
		cout<<"������"<<m->name<<endl;;

   }





