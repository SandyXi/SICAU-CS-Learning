//��6.8 ��ģ��Stack��ʹ�þ���

#include<iostream>
using namespace std;

const int size=10;

template<typename T>  //ģ������
class Stack{   //��ģ������ΪStack
public:
	void init()
	{
		tos=0;
	}
	void push(T ch);
	T pop();
private:
	T st[size];
	int tos;
};

template<typename T> //ģ������
void Stack<T>::push(T ob) //����ģ�����ⶨ���Ա����push
{
	if(tos==size)
	{
		cout<<"Stack is full!"<<endl;
		return;
	}
	st[tos]=ob;
	tos++;
}

template<typename T> //ģ������
T Stack<T>::pop() //����ģ�����ⶨ���Ա����pop
{
	if(tos==0)
	{
		cout<<"Stack is empty!"<<endl;
		return 0;
	}
	tos--;
	return st[tos];
}

int main()
{
	//�����ַ���ջ
	Stack<char>s;
	int i;
	s.init();
	s.push('a');
	s.push('b');
	s.push('c');
	s.push('d');
	for(i=0;i<4;i++)
		cout<<"pop s:"<<s.pop()<<endl;

	//�������Ͷ�ջ
	Stack<int>t;
	t.init();
	t.push(1);
	t.push(4);
	t.push(8);
	t.push(22);
	for(i=0;i<4;i++)
		cout<<"pop s:"<<t.pop()<<endl;

	return 0;
}