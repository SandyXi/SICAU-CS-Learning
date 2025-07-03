//例3.31 静态成员函数来访问静态数据成员
#include<iostream>
#include<string>
using namespace std;
class small_cat
{
private:
    double weight;
    static double total_weight;
    static double total_number;
public:
    small_cat (double w);
    void display ();
	static void total_disp();
};
small_cat::small_cat (double w)
{
	weight=w;
	total_weight+=w;
	total_number++;
}
void small_cat::display ()
{
	cout<<"这只小猫的重量是："<<weight<<"千克"<<endl;
}
void small_cat::total_disp()
{
	cout<<total_number<<"只小猫的总重量是："<<total_weight<<"千克"<<endl;
}

double small_cat::total_weight=0;
double small_cat::total_number=0;

int main ()
{
	small_cat::total_disp();//定义对象之前就可以调用静态成员函数
	small_cat w1(0.5), w2(0.6), w3(0.4);
	w1.display();
	w2.display();
	w3.display();
	small_cat::total_disp();
	return 0;
}
