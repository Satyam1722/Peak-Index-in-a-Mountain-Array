#include<iostream>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int a[n];

  for(int i=0;i<n;i++)
    cin>>a[i];

  int start=0,end=n-1,mid=(start+end)/2,ans=-1;

    while(start<end)
    {
      if(a[mid-1]<a[mid])
      {
        if(a[mid]>a[mid+1])
        {
           ans=mid;
           break;
        }
        start=mid+1;
      }
      else
        end=mid-1;
    }
    cout<<ans;
}