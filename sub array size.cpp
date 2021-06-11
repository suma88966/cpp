#include<iostream>
using namespace std;
int main()
{
	int n,size,flag=0;
	cout<<"enter n";
	cin>>n;
	cout<<"enter size";
	cin>>size;
	int a[n];
	int count=0;
	cout<<"enter array elements";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			for(int k=i;k<=j;k++)
			{
			  count=count+a[k];
		    }
		    if(count==size)
		    {

		    	flag=1;
		    	break;
			}
			count=0;
		}
	}
	if(flag!=1)
	cout<<"given size is not exist";
	else
	cout<<"given size is exist";
}
