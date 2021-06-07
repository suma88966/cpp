#include<bits/stdc++.h>
using namespace std;
bool isprime(int n,int i=2)
{
	if(n<=2)
	{
		if(n==2)
		return true;
		else
		return false;
	}
	if(n%i==0)
	{
		return false;
	}
	if(i>sqrt(n))
	{
	return true;
   }
	return isprime(n,i+1);
}
int main()
{
	int n,i;
	cin>>n;
	cout<<isprime(n,i=2);
}
