//��3.32  ��̬��Ա�������ʷǾ�̬���� 
#include<iostream>
#include<string>
using namespace std;

class small_cat 
{
private:	 
    double weight;                    
    static double total_weight;    //��̬��Ա              
    static double total_number;       //��̬��Ա 
public:
    small_cat (double w);             //ʲô���캯��        
    static void display (small_cat& w); //������̬��Ա����       
	static void total_disp();       //������̬��Ա���� 
};

small_cat::small_cat (double w)
{ 
	weight=w;
	total_weight+=w;
	total_number++;
}

void small_cat::display (small_cat& w) 
                     //���徲̬��Ա�������������������Ϊ��������ʾÿֻСè������
{
	cout<<"��ֻСè�������ǣ�"<<w.weight<<"ǧ��"<<endl;
}

void small_cat::total_disp() //���徲̬��Ա��������ʾСè��ֻ����������
{
	cout<<total_number<<"ֻСè���������ǣ�"<<total_weight<<"ǧ��"<<endl;
}

double small_cat::total_weight=0;                  
double small_cat::total_number=0; 

int main () 
{
	small_cat w1(0.5), w2(0.6), w3(0.4);
	small_cat::display(w1);  //���þ�̬��Ա��������ʾ��1ֻСè������
	small_cat::display(w2);//���þ�̬��Ա��������ʾ��2ֻСè������
	small_cat::display(w3);//���þ�̬��Ա��������ʾ��3ֻСè������
	small_cat::total_disp();  //���þ�̬��Ա��������ʾСè��ֻ����������
	return 0;
}
