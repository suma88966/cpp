#include<bits/stdc++.h>
using namespace std;
bool ispossible(int arr[],int n,int barrier,int students)
{
	int count=1;
	int sumofallocations=0;
	for(int i=0;i<n;i++)
	{
		if(sumofallocations+arr[i]>barrier)
		{
			count++;
			sumofallocations=arr[i];
			if(count>students)
		       return false;
		}
		else
		{
			sumofallocations+=arr[i];
		}
	}
	return true;
}
int main()
{
	int n,s;
	cout<<"enter number";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter no.of students";
	cin>>s;
	int low=*min_element(arr,arr+n);
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	int high =sum;
	int ans=-1;
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(ispossible(arr,n,mid,s))
		{
			ans=mid;
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	cout<<ans;
}
