#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     int n, k;
     cin>>n>>k;
     int cnt=0;
     int a[n];
     for(int i=0; i<n; i++)
     {
      cin>>a[i];
     }
     int dis=0;
     int sum=0;
     for(int i=0; i<n; i++)
     {  
     dis = max(dis,a[i]);
         sum+=a[i];
        if(sum-dis<=k)
        {
          cnt++;
        }
     }
     cout<<cnt<<endl;

   }
    return 0;
}