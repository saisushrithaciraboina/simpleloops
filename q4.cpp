#include<iostream>
using namespace std;
int main(){
	int i;
	cin>>i;
	for(i=1;i<=100;i++)
	{
		if(i%3==0)
		{
		cout<<"\n fizz";
	}
		else if(i%5==0)
		{
		cout<<"\n buzz";
	}
		else if(i%3==0&&i%5==0)
		{
		cout<<"\n fizzbuzz";
	}
	else
	{
		cout<<"\n eliminated from the game";
	}
	}
}
