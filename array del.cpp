#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p;
	cout<<"enter size";
	cin>>n;
	int arr[n];
	cout<<"enter elements";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter position of ele u want to del";
	cin>>p;
	int ind = p-1;
	for(int j=ind;j<n;j++)
	{
		arr[j]=arr[j+1];
	}
	n--;
	if(p<=n)
    {
	for(int j=0;j<n;j++)
	{
		cout<<arr[j];
	}
    }
    else
    {
     cout<<"element is not there";
    }

}
