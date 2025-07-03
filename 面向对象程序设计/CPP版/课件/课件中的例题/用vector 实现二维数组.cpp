#include <iostream>   
#include <vector>   
using   namespace   std;   
void   main()   
{   
	vector<vector<int> >   ar(3);   
    for(int   i=0;i<3;i++)   
    ar[i].resize(3);//设置数组的大小3X3   
    
	//现在你可以和使用数组一样使用这个vector   
    for(int   i=0;i<3;i++)   
		for(int   j=0;j<3;j++)   
             ar[i][j]=(i*j);   
    
	//输出
	cout<<"输出二维数组3*3"<<endl;
    for(int   i=0;i<3;i++)   
    {   
        for(int   j=0;j<3;j++)   
           cout<<ar[i][j]<<"   ";   
           cout<<endl;   
     }   
     ar.resize(5);   
     ar[3].resize(3);   
     ar[4].resize(3);   
     //现在是5X3的数组了   
     for(int   i=0;i<5;i++)   
		 for(int   j=0;j<3;j++)  
			 ar[i][j]=(i*j);   
     
	 cout<<"输出二维数组5*3"<<endl;
	 for(int   i=0;i<5;i++)   
     {   
         for(int   j=0;j<3;j++)   
             cout<<ar[i][j]<<"   ";   
             cout<<endl;   
      }   
      int m;
	  cin>>m;
}
 