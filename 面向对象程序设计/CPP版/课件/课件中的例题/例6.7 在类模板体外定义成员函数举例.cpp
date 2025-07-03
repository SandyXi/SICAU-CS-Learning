//��6.7 ����ģ�����ⶨ���Ա��������

#include<iostream>
using namespace std;

template<typename T>  //ģ������
class Compare{   //��ģ������ΪCompare
public:
	Compare(T a,T b);
	T max();
private:
	T x,y;
};

template<typename T> //ģ������
Compare<T>::Compare(T a,T b) //����ģ�����ⶨ�幹�캯��
{
	x=a;
	y=b;
}

template<typename T> //ģ������
T Compare<T>::max() //����ģ�����ⶨ�庯��
{
	return (x>y)?x:y;
}

int main()
{
	Compare<int>com1(3,7); //����ģ�嶨�����
	Compare<double>com2(12.34,56.67);
	Compare<char>com3('c','k');

	cout<<"���е����ֵ�ǣ�"<<com1.max()<<endl;
	cout<<"���е����ֵ�ǣ�"<<com2.max()<<endl;
	cout<<"���е����ֵ�ǣ�"<<com3.max()<<endl;
	return 0;
}