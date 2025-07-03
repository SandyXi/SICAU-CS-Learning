//c++中<array>的使用

//在使用c语言或cpp创建数组时,大量使用new和delete,很不爽 
//现在改用使用<array>,很方便,用起来和STL<vector>一样的
//执行效率比<vector>高,几乎和int myarray[5]效率一样

#include<iostream>  
#include<array>     
using namespace std;  
  
int main ()  
{  
     //-----------------------------------------------  
  //--这是1维数组  
    array<int,5> myarray={1,2,3,4,5};
	int n;
 //-----------------------------------------------  
  cout <<"myarray="<<endl;  
  for (n=0; n<myarray.size(); n++){  
      cout << myarray[n] <<'\t';  
  }  
  cout << endl;  
  //-----------------------------------------------  
  //当然也可以使用  
  cout <<"myarray="<<endl;  
  for (n=0; n<myarray.size(); n++){  
      cout << myarray.at(n) << '\t';  
  }  
   cout << endl;  
 //-----------------------------------------------  
  //--这是2维数组,共3行2列  
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
