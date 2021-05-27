#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p,ele,ind,flag=0;
	cout<<"enter size";
	cin>>n;
	int arr[n];
	cout<<"enter elements";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter element u want to del";
	cin>>ele;
	for(int i=0;i<n;i++)
	{
		if (arr[i]==ele)
		{
		flag=1;
		ind=i;
		for(int j=ind;j<n;j++)
	   {
		arr[j]=arr[j+1];
    	}
	    n--;
	   for(int j=0;j<n;j++)
	   {
		cout<<arr[j];
	   }
	    }
	}
	if(flag==0)
	{
		cout<<"element not found";
	}



}
