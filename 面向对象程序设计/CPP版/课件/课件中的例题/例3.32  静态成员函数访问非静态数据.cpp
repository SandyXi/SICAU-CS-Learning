//例3.32  静态成员函数访问非静态数据 
#include<iostream>
#include<string>
using namespace std;

class small_cat 
{
private:	 
    double weight;                    
    static double total_weight;    //静态成员              
    static double total_number;       //静态成员 
public:
    small_cat (double w);             //什么构造函数        
    static void display (small_cat& w); //声明静态成员函数       
	static void total_disp();       //声明静态成员函数 
};

small_cat::small_cat (double w)
{ 
	weight=w;
	total_weight+=w;
	total_number++;
}

void small_cat::display (small_cat& w) 
                     //定义静态成员函数，将对象的引用作为参数，显示每只小猫的重量
{
	cout<<"这只小猫的重量是："<<w.weight<<"千克"<<endl;
}

void small_cat::total_disp() //定义静态成员函数，显示小猫的只数和总重量
{
	cout<<total_number<<"只小猫的总重量是："<<total_weight<<"千克"<<endl;
}

double small_cat::total_weight=0;                  
double small_cat::total_number=0; 

int main () 
{
	small_cat w1(0.5), w2(0.6), w3(0.4);
	small_cat::display(w1);  //调用静态成员函数，显示第1只小猫的重量
	small_cat::display(w2);//调用静态成员函数，显示第2只小猫的重量
	small_cat::display(w3);//调用静态成员函数，显示第3只小猫的重量
	small_cat::total_disp();  //调用静态成员函数，显示小猫的只数和总重量
	return 0;
}
