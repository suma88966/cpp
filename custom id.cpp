#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int *max=max_element(arr,arr+n);
	int frq[*max+1]={0};
	for(int i=0;i<n;i++)
	{
		frq[arr[i]]++;
	}
	for(int i=0;i<=*max;i++)
	{
		if ((frq[i])>0)
		{
			cout<<i<<":"<<frq[i]<<"\n";
		}
	}
	int *max1=max_element(frq,frq+*max);
	for(int i=0;i<=*max;i++)
	{
		if((frq[i])==*max1)
		cout<<"highest visited id"<<i<<"count="<<*max1;
	}
}
