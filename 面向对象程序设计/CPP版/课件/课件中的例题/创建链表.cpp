#include<iostream>
using namespace std;

struct structNode   //����һ�����ṹ����
{     
	int num;
    char name[10];
    float score;
    structNode *next;
};

structNode *head; //�����ͷ�ڵ��ָ��
structNode *pre; //��β����ڵ�ʱ��Ҫ����βָ��

structNode *beforeh; //Ǥ�巨�����ͷ�ڵ��ָ��

void init();//��ʼ������
void create();//��巨����ѧ������
void disp();//�������
bool IsEmpt(structNode *p); //�ж������Ƿ�Ϊ��
void beforecreat( );  //ǰ�巨����ѧ������
void del();  //��������

int main()
{
	cout<<"---��巨����ѧ������---"<<endl;
	init(); 
	create();
	cout<<"---�����巨����ѧ������---"<<endl;
	disp();
	cout<<"---ǰ�巨����ѧ������---"<<endl;
    del(); 
	init();
    beforecreat( );
	cout<<"---���ǰ�巨����ѧ������---"<<endl;
	disp();
	del();
	return 0;
}
void init()
{
	head = new structNode;  
	if(!IsEmpt(head))
	{
		head->next = NULL;  //����ͷָ���ʼ��
		pre = head;   //��βָ���ʼ��
	}
	else
	{
		cout<<"�ǳ��ź���ѧ�����������ɹ���\n";
	}	
}
void create() //��巨����ѧ������
{
	structNode *s;//��ǰ�ڵ�
	int node;  //ѧ������ڵ����
	cout<<"�����봴��ѧ���ڵ�ĸ����� ";
	cin>>node;
	for(int i = 0; i<node; i++)
	{
		s = new structNode;
		if(!IsEmpt(s))  //�������ɹ��Ļ����ͽ�����ǰ�ڵ�,������������ݳ�ʼ���ڵ��еĳ�Աֵ
		{ 
			cout<<"������� "<<i+1<<" ��ͬѧ����Ϣ��\n";
			cout<<"�������ѧ����ѧ�ţ�";
			cin>>s->num;
			cout<<"�������ѧ����������";
			cin>>s->name;
			cout<<"�������ѧ���ĳɼ���";
			cin>>s->score;
			cout<<endl;	
			s->next = NULL;
		}			
		pre->next=s;//��ǰ�ڵ��������
		pre=s; //�޸���βָ�룬ʼ��ָ���������һ���ڵ�
		
	}	
}
void disp()
{
	cout<<"��������нڵ������"<<endl;
	int i = 0;
	structNode *p = head->next;  //p��Ϊ���������ָ��
	while(p != NULL)
	{
		cout<<"������� "<<++i<<" ��ͬѧ����Ϣ��\n";
		cout<<"�������ѧ����ѧ�ţ�";
		cout<<p->num;
		cout<<"\n�������ѧ����������";
		cout<<p->name;
		cout<<"\n�������ѧ���ĳɼ���";
		cout<<p->score;
		cout<<endl;		
		p=p->next;  //��������ʱ����Ҫ���Ʊ���ָ��
	}
}
bool IsEmpt(structNode *p)
{
	if(p==NULL)
		return true;
	else
		return false;
}



void beforecreat( )  //ǰ�巨����ѧ������
 {   
    int m; //�ڵ����
	cout<<"�����봴��ѧ���ڵ�ĸ����� ";
    cin>>m;
    structNode *s;    //��ǰ�ڵ㹤��ָ��
    for(int i = 0; i<m; i++)
    { 
		s=new structNode;  //�����½��
        //����ѧ����Ϣ�ڵ�
		if(!IsEmpt(s))  //�������ɹ��Ļ����ͽ�����ǰ�ڵ�,������������ݳ�ʼ���ڵ��еĳ�Աֵ
		{ 
			cout<<"������� "<<i+1<<" ��ͬѧ����Ϣ��\n";
			cout<<"�������ѧ����ѧ�ţ�";
			cin>>s->num;
			cout<<"�������ѧ����������";
			cin>>s->name;
			cout<<"�������ѧ���ĳɼ���";
			cin>>s->score;
			cout<<endl;	
			s->next = NULL;
		}			
        s->next=head->next;
        head->next =s;
     } 
 }

void del()  //��������
{
	 structNode *s;    //��ǰ�ڵ㹤��ָ��
	 s=head->next;
	 while(s!=NULL)
	 {
		 head->next=s->next;
		 delete s;
		 s=head->next;
	 }
	 delete head;
}