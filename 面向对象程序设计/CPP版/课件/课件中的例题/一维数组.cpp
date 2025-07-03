#include <iostream>
using namespace std;
const int N=5;
int main()
{	
	int i; 
	int s[N],ave,sum=0;
	for(i=0;i<N;i++) 
		cin>>s[i];
	for(i=0;i<N;i++) 
		sum=sum+s[i];
  	ave=sum/N;
	for(i=0;i<N;i++)
		if(s[i]>ave) cout<<s[i];
	return 0;
}  
