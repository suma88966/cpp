#include<bits/stdc++.h>
using namespace std;
int reversearray(int l,int r,int arr[])
{
	if(l>=r)
	{
	  return 0;
   }
	else
	{
		swap(arr[l],arr[r]);
		return reversearray(l+1,r-1,arr);
	}
	
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	reversearray(0,n-1,arr);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
}

