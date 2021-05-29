#include<iostream>
using namespace std;
int main()
{
	int n,flag=0;
	cout<<"enter n";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]<arr[i+1])
		flag=1;
		else
		{
			flag=0;
			cout<<"not sorted";
			break;
			
		}
	}
	if(flag==1)
	cout<<"sorted";
}
