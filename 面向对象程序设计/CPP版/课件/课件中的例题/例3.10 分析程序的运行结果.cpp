//��3.10 ������������н��
#include<iostream>
using namespace std;

class Location
{
public:
	Location(int m,int n)  //���캯��
	{
		x=m;
		y=n;
	}

	void Init(int initx,int inity)  //�����������ĳ�Ա����
	{
		x=initx;
		y=inity;
	}

	int GetX()
	{
		return x;
	}	
	
	int GetY()
	{
		return y;
	}
private:
	int x,y;
};

int main()
{
	Location A3;
	A3.Init(785,980);
	cout<<A3.GetX()<<"  "<<A3.GetY()<<endl;
	return 0;
}

