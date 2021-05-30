//1.this is an optimize one to find whether it is prime or not
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,status=0;
	cout<<"enter a number";
	cin>>n;
	for(i=2;i<=sqrt(n)+1;i++)
	{
		if(n%i==0)
		{
		 status = 1;
		 if(status==1 && n==2)
		 {
		 cout<<"prime";
		 break;
	         }
		 else
		 {
		 cout<<"not prime";
		 break;
	      }
	    }
	}
	if(status!=1 && n!=1 && n!=0)
	cout<<"prime";
	if(n==1)
	cout<<"not prime";
	if(n==0)
	cout<<"neither prime nor composite";
}


//2.this is also an optimize one but unneccesarily checks remaining conditions also

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,status=0;
	cout<<"enter a number";
	cin>>n;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
		 status = 1;
		 if(status==1 && n==2)
		 {
		 cout<<"prime";
		 break;
	     }
		 else
		 {
		 cout<<"not prime";
		 break;
	      }
	    }
	}
	if(status!=1 && n!=1 && n!=0)
	cout<<"prime";
	if(n==1)
	cout<<"not prime";
	if(n==0)
	cout<<"neither prime nor composite";
}


//3.it checks from 1 to number whether it is divisible by given number or not n if count == 2 it prints that it is prime

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,fact_count=0,i;
	cout<<"enter a number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i == 0)
		fact_count+=1;
	}
	if(fact_count == 2)
	 cout<<"prime";
	else if(n==0)
	 cout<<"neither prime nor composite";
	 else
	 cout<<"not prime";
}

