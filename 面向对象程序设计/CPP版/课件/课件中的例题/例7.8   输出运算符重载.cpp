//例7.8   输出运算符"<<"重载
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
	friend ostream& operator<<(ostream &stream,Coord &ob); //重载运算符"<<"
private:
	int x,y;
};

ostream& operator<<(ostream &stream,Coord &ob)
{
	stream<<ob.x<<","<<ob.y<<endl;
	return stream;
}

int main()
{
	Coord a(33,78),b(129,848);
	cout<<a<<b<<endl;
	return 0;
}
