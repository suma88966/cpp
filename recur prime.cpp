#include<bits/stdc++.h>
using namespace std;
bool isprme(int n)
{
	int i=2;
	if(i<=sqrt(n))
	{
	if(n%i==0)
	{
		return false;
	}
	i++;
   }
   return true;
}
int main()
{
	int n;
	cin>>n;
	cout<<isprme(n);
}
