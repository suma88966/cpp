#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,status=0;
	cout<<"enter a number";
	cin>>n;
	for(i=2;i<=sqrt(n)+1;i++)
	{
		if(n%i==0)
		{
		 cout<<"not a prime";
		 status = 1;
		 break;
	    }
	}
	if(status!=1)
	cout<<"prime";
}
