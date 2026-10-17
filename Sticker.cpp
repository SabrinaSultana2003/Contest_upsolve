#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   int n;
   cin>>n;

   vector<ll> a(n+1);
   for(int i=1; i<=n; i++)
   {
    cin>>a[i];
   }
   map<ll,ll>mp;

   for(int i=1; i<=n;i++)
   {
    mp[a[i]]+=i;
   }
   for(auto it : mp )
   {
    cout<<it.first<<" "<<it.second<<endl;
   }

    return 0;
}