#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,fact_count=0,i;
	cout<<"enter a number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		fact_count+=1;
	}
	if(fact_count == 2)
	 cout<<"prime";
	else
	 cout<<"not a prime";
}
