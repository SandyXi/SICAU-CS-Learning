//c++��<array>��ʹ��

//��ʹ��c���Ի�cpp��������ʱ,����ʹ��new��delete,�ܲ�ˬ 
//���ڸ���ʹ��<array>,�ܷ���,��������STL<vector>һ����
//ִ��Ч�ʱ�<vector>��,������int myarray[5]Ч��һ��

#include<iostream>  
#include<array>     
using namespace std;  
  
int main ()  
{  
     //-----------------------------------------------  
  //--����1ά����  
    array<int,5> myarray={1,2,3,4,5};
	int n;
 //-----------------------------------------------  
  cout <<"myarray="<<endl;  
  for (n=0; n<myarray.size(); n++){  
      cout << myarray[n] <<'\t';  
  }  
  cout << endl;  
  //-----------------------------------------------  
  //��ȻҲ����ʹ��  
  cout <<"myarray="<<endl;  
  for (n=0; n<myarray.size(); n++){  
      cout << myarray.at(n) << '\t';  
  }  
   cout << endl;  
 //-----------------------------------------------  
  //--����2ά����,��3��2��  
  array<array<int,2>,3 > myarray2D={1,2,3,4,5,6}; 
  int m;
  //-----------------------------------------------  
  cout <<"myarray2D="<<endl;  
  for (m=0; m<myarray2D.size(); m++){  
    for (n=0; n<myarray2D[m].size(); n++){      
        cout << myarray2D[m][n] <<'\t';  
    }   
   cout << endl;   
  }  
  cout << endl;  
  //-----------------------------------------------  
    
  return 0;  
}  
