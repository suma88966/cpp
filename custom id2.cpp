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
	map<int,int>dic;
	for(int i=0;i<n;i++)
	{
		dic[arr[i]]++;
	}
	for(auto it:dic)
	{
	  cout<<it.first<<" "<<it.second<<"\n";
	}
	int max=0;
	int id = 0;
	for(auto it:dic)
	{
	  if(max<it.second)
	  {
	      max=it.second;
	      id=it.first;
	  }
	}
	cout<<"the highest visited customer is"<<id<<"count ="<<max;
}
