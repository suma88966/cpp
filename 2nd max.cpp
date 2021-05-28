#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"enter number";
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
  cin>>arr[i];
  }
  int max=arr[0];
  for(int i=0;i<n;i++)
  {
  if(arr[i]>max)
  {
   max=arr[i];
  }
  }
  cout<<"first max element is:"<<max;
  int res=-1;
  for(int i=0;i<n;i++)
  {
      if(arr[i]!=max)
      {
        if(res==-1)
            res=i;
        else
        {
            if(arr[i]>arr[res])
                res=i;
        }
      }
  }
  cout<<"second max is:"<<arr[res];
}
