#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cin>>n;
	for (int i=1;i<=n;i++){
		sum=sum+2*i-1;
	}
	cout<<sum;
}
