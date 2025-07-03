#include <iostream>
using namespace std;
class X
{
    int i;
    public:
    X(int ii=0);
    X(X &a);
    ~X();
    void modify();
};


X::X(int ii)
{
    i=ii;
    cout<<"constructor  "<<this->i<<endl;
}


X::X(X &a)
{
    i=a.i;
    cout<<"copy   "<<this->i<<endl;
}


X::~X()
{
    cout<<"destructor   "<<this->i<<endl;
}


void X::modify()
{
    i++;
}


X f5(X b)
{
    //X b(100);
    return b;
}


int main()
{
    X  a(10),b(100);

    f5(b)=a;
    return 0;
}

