//��3.22 ʹ�ö���ָ����Ϊ��������
#include<iostream>
using namespace std;
class aClass
{
public:
    aClass(int n) 
	{
		i=n; 
	}
    void set(int n)
	{ 
		i=n; 
	}
    int get( )
	{ 
		return i;
	}
private: 
	int i; 
};		  
void sqr(aClass *ob)
{       
	ob->set(ob->get()*ob->get());
    cout<<"�ں���sqr�У��βζ���ob�����ݳ�Աi��ֵΪ��";
    cout<<ob->get()<<endl; 
}
int main()
{   
	aClass  obj(10);
	cout<<"���ú���sqrǰ��ʵ�ζ���obj�����ݳ�Աi��ֵΪ��";
    cout<<obj.get( )<<endl;
	sqr(&obj); 
	cout<<"���ú���sqr��ʵ�ζ���obj�����ݳ�Աi��ֵΪ��";
    cout<<obj.get( )<<endl;
	return 0;  
} 