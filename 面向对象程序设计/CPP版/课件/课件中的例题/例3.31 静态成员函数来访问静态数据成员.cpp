//��3.31 ��̬��Ա���������ʾ�̬���ݳ�Ա
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
	cout<<"��ֻСè�������ǣ�"<<weight<<"ǧ��"<<endl;
}
void small_cat::total_disp()
{
	cout<<total_number<<"ֻСè���������ǣ�"<<total_weight<<"ǧ��"<<endl;
}

double small_cat::total_weight=0;
double small_cat::total_number=0;

int main ()
{
	small_cat::total_disp();//�������֮ǰ�Ϳ��Ե��þ�̬��Ա����
	small_cat w1(0.5), w2(0.6), w3(0.4);
	w1.display();
	w2.display();
	w3.display();
	small_cat::total_disp();
	return 0;
}
