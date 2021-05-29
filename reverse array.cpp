#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter n";
	cin>>n;
	int arr[n];
	cout<<"enter array elements";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int x=n-1;
	for(int i=0;i<n/2;i++)//0
	{
		if(i==x)//2>(3
        {
        break;
        }
		swap(arr[i],arr[x]);
		x--;
	}

	for(int j=0;j<n;j++)
	{
		cout<<arr[j];
	}

}

