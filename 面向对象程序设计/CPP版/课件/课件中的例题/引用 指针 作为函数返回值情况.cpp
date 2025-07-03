#include <iostream>
using namespace std;

int swap(int &m,int &n)   //引用函数参数
{
    int temp;
    cout<<m<<","<<n<<endl;
    cout<<m<<","<<n<<endl;
    temp=m;
    m=n;
    n=temp;
    cout<<m<<","<<n<<endl;
    return m;
}
int main()
{
   int x,y;
   cin>>x>>y;
   cout<<&x<<","<<&y<<endl;
   cout<<x<<","<<y<<endl;
   cout<<swap(x,y)<<endl;
   //cout<<&z<<","<<z<<endl;
   cout<<&x<<","<<&y<<endl;
   cout<<x<<","<<y<<endl;
}

