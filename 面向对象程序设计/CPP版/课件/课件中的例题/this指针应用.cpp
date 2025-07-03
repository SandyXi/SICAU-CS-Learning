#include<iostream>
//#include<stdlib.h>
using namespace std;

class Sample {
private:
	int x,y;
public:
	Sample(int i=0, int j=0)
	{
		x=i;  y=j;
	}
	void print()
	{
		cout<<x<<",    "<<y<<endl;
	}
	void copy(Sample & xy);
};

void Sample::copy(Sample &xy)
{
	if (this==&xy) return;
	*this=xy;
}
void main()
{
	Sample p1, p2(5,6);
	p1.copy(p2);
	p1.print();
	//system("pause");

}
