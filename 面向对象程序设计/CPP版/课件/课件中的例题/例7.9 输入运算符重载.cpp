//��7.9 ���������"<<"����

#include<iostream>
#include<iomanip>
using namespace std;

class Coord
{
public:
	Coord(int i=0,int j=0)
	{
		x=i;
		y=j;
	}
	friend ostream& operator<<(ostream &stream,Coord &ob); //���������"<<"
	friend istream& operator>>(istream &input,Coord &ob); //���������">>"
private:
	int x,y;
};

ostream& operator<<(ostream &stream,Coord &ob)
{
	stream<<ob.x<<","<<ob.y<<endl;
	return stream;
}

istream& operator>>(istream &input,Coord &ob)
{
	cout<<"��������������x,y:";
	input>>ob.x;
	input>>ob.y;
	return input;
}

int main()
{
	Coord a(33,78),b(129,848);
	cout<<a<<b<<endl;
	cout<<"���¸�����a��ֵ��"<<endl;
	cin>>a;
	cout<<a<<endl;
	return 0;
}
