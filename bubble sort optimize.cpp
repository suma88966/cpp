#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter how many elements u want to enter";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int flag=0;
	for(int i=0;i<n-1;i++)
	{
	
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				flag=1;
				swap(a[j],a[j+1]);	
			}
		}
		if(flag==0)
		{
			break;
		}
		
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	
}
