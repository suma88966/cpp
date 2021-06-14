#include<bits/stdc++.h>
using namespace std;
void permutations(int n,int a[],vector<int>&ds,int freq[])
{
	if(ds.size()==n)
	{
		for(int i=0;i<n;i++)
	{
		cout<<ds[i]<<" ";
	}
	cout<<"\n";
    }
    for(int i=0;i<n;i++)
    {
    	if(freq[i]==0)
    	{
    		freq[i]=1;
    		ds.push_back(a[i]);
    		permutations(n,a,ds,freq);
    		//freq[i]=0;
    		ds.pop_back();	
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)cin>>a[i];
	vector<int>ans;
	int freq[n]={0};
	permutations(n,a,ans,freq);
}
