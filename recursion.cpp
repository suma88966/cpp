/*#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
  if(n==1)
    return 1;
  else
    return n*fact(n-1);
}
int main()
{
    int n=5;
    cout<<fact(n);
}*/
#include<bits/stdc++.h>
using namespace std;
int n;
int fact(int i)
{
    if(i>=n)
     return n;
    else
        return i*fact(i+1);
}
int main()
{
    cin>>n;
    cout<<fact(1);
}
