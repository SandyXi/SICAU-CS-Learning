#include <iostream>   
#include <vector>   
using   namespace   std;   
void   main()   
{   
	vector<vector<int> >   ar(3);   
    for(int   i=0;i<3;i++)   
    ar[i].resize(3);//��������Ĵ�С3X3   
    
	//��������Ժ�ʹ������һ��ʹ�����vector   
    for(int   i=0;i<3;i++)   
		for(int   j=0;j<3;j++)   
             ar[i][j]=(i*j);   
    
	//���
	cout<<"�����ά����3*3"<<endl;
    for(int   i=0;i<3;i++)   
    {   
        for(int   j=0;j<3;j++)   
           cout<<ar[i][j]<<"   ";   
           cout<<endl;   
     }   
     ar.resize(5);   
     ar[3].resize(3);   
     ar[4].resize(3);   
     //������5X3��������   
     for(int   i=0;i<5;i++)   
		 for(int   j=0;j<3;j++)  
			 ar[i][j]=(i*j);   
     
	 cout<<"�����ά����5*3"<<endl;
	 for(int   i=0;i<5;i++)   
     {   
         for(int   j=0;j<3;j++)   
             cout<<ar[i][j]<<"   ";   
             cout<<endl;   
      }   
      int m;
	  cin>>m;
}
 