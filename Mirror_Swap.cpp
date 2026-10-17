#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int n;
      cin>>n;
      int a[2*n];
      for(int i=0; i<n+n; i++)
      {
        cin>>a[i];
      }
      int sum =0;
      for(int i=0; i<n; i++)
      {
        if(a[i]<a[2*n-i-1])
        {
          sum+=a[2*n-i-1];
        }
        else
        {
            sum+=a[i];
        }
      }
      cout<<sum<<endl;
   }
    return 0;
}