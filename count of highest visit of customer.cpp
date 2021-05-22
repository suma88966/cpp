#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,arr[n],count1=0,res;
	cout<<"enter n value";
	cin>>n;
	cout<<"enter values";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			count+=1;
		}

		if(count>count1)
		{
			count1=count;
		    res=arr[i];
     	}
	}
	cout<<"count="<<count1;
	cout<<"custom id:"<<res;
}
