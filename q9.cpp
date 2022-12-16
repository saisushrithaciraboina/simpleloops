#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n,r,s=0,i=0;
	cin>>n;
	while(n>0)
	{
	r=n%10;
	s=s+r*pow(2,i);	
	n=n/10;
	i++;
	}
	cout<<s;
}
