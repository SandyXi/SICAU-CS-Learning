//��5.10 ����ǳ�㸴�Ƶ�����
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
private:
	char *ptr;
};

int main()
{
	STRING p1("book");
	STRING p2("jeep");
	p2=p1;
	return 0;
}
