#include<iostream>
using namespace std;
int main(){
	int x,guess;
	cin>>x;
	while(abs(guess*guess-x)>=10**-12)
	{
		guess=x/2;
		guess=((guess+x/guess)/2);
	}
		cout<<guess;
}
