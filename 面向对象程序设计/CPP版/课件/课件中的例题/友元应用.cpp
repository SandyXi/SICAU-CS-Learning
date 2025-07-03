
#include <iostream>
using namespace std;
class Base1;    // 前向引用
class Base2
{
public:
	Base2(int a )
	{
		 int i;
		 x=new int[a];
		for (i=0;i<a;i++)
			x[i]=i+1;
		n=a;
	}
	friend void disp(Base1 &g , Base2 &h);
	void disp()
	{
		int k;
		for (k=0;k<n;k++)
			cout<<x[k]<<",";
		cout<<endl;

	}
private:
	int *x;
	int n;
};

class Base1
{
public:
	Base1(int b )
	{
		int j;
		y=new int[b];
		for (j=0;j<b;j++)
			y[j]=b-j;
		m=b;
	}
	friend void disp(Base1 &g , Base2 &h);
	void disp()
	{
		int k;
		for (k=0;k<m;k++)
			cout<<y[k]<<",";
		cout<<endl;

	}
private:
	int *y;
	int m;
};

void disp(Base1 &g , Base2 &h)
{
		int l,k;
		if(g.m<h.n)l=g.m;
			else l=h.n;
		for (k=0;k<l;k++)
			g.y[k]=g.y[k]+h.x[k];
}
int main()
{
	Base1 g(5);
    Base2 b(9);
    	g.disp();
	b.disp();
	disp(g,b);
	g.disp();
	b.disp();b.disp();

    return 0;
}

