#include<bits/stdc++.h>
using namespace std;
int a=0,b=1,n;
int fibo(int n)
{
        	int c= a+b;
	    	a=b;
	    	b=c;
	    	while(n>3)
            {
		    return fibo(n-1);
            }
            return c;
}
int main()
{
	cin>>n;
	cout<<fibo(n);
}
