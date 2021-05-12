#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,res=0,r;
	cout<<"enter number";
	cin>>n;
	while(n)
	{
		r=n%10;
		n=n/10;
		res = res+r*r;
		if(n==0)
     	{
		   n = res;
		   res = 0;
		   if(n<10)
		   {
		   	if(n==1)
		   	{
		   	   cout<<"happy number";
			   break;
		    }   
		    else
		    {
		    	cout<<"not a happy number";
		    	break;
	    	}     
		    }
        }
    }
}
