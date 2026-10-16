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
    vector <int> a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int sum=0;
    int mx=INT_MIN;
    for(int i=0; i<n; i++)
    {
      for(int j=i+1; j<n; j++)
      {
        if(a[i] <= a[j])
        {
           sum=a[i]+a[j];
           mx = max(mx,sum);
           
        }
      }
    }
    int mx_c=mx;
    for(int i=0; i<n; i++)
    {
        mx_c = max(a[i], mx_c);
    }
    cout<<mx_c<<endl;
   }
    return 0;
}