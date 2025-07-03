//��5.11 ���ظ�ֵ��������ָ����������(���)
#include<iostream>
using namespace std;
class STRING
{
public:
	STRING(char *s)
	{
		cout<<"Constructor called."<<endl;
		ptr=new char[strlen(s)+1];
		strcpy(ptr,s);
	}
	~STRING()
	{
		cout<<"Destructor called.---"<<ptr<<endl;
		delete ptr;
	}
	STRING &operator=(const STRING &S); //������ֵ��������غ���

private:
	char *ptr;
};

STRING &STRING::operator=(const STRING &s)  //���帳ֵ��������غ���
{
	if(this==&s)return *this;  //��ֹs=s�ĸ�ֵ
	delete ptr;  //�ͷŵ�ԭ����
	ptr=new char[strlen(s.ptr)+1];  //����������
	strcpy(ptr,s.ptr);  //�ַ�������
	return *this;
}

int main()
{
	STRING p1("book");
	STRING p2("jeep");
	p2=p1;
	return 0;
}

