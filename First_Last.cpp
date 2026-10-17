#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;

   long long int a[n];
   for(int i=0; i<n; i++)
   {
    cin>>a[i];
   }
   map<long long int,pair<int,int>> mp;

   for(int i=0; i<n; i++)
   {
    if(mp.find(a[i])==mp.end())
    {
        mp[a[i]]={i+1,i+1};
    }
    else
    {
        mp[a[i]].second=i+1;
    }
   }
   for(auto it : mp){
        cout << it.first << " " << it.second.first << " " << it.second.second << endl;
    }

    return 0;
}