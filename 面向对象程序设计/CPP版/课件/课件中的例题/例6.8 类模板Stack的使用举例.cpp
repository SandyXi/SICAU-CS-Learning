//例6.8 类模板Stack的使用举例

#include<iostream>
using namespace std;

const int size=10;

template<typename T>  //模板声明
class Stack{   //类模板名称为Stack
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

template<typename T> //模板声明
void Stack<T>::push(T ob) //在类模板体外定义成员函数push
{
	if(tos==size)
	{
		cout<<"Stack is full!"<<endl;
		return;
	}
	st[tos]=ob;
	tos++;
}

template<typename T> //模板声明
T Stack<T>::pop() //在类模板体外定义成员函数pop
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
	//定义字符堆栈
	Stack<char>s;
	int i;
	s.init();
	s.push('a');
	s.push('b');
	s.push('c');
	s.push('d');
	for(i=0;i<4;i++)
		cout<<"pop s:"<<s.pop()<<endl;

	//定义整型堆栈
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