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

     vector< pair<int,int>> a(n);
     for(int i=0; i<n; i++)
     {
        cin>>a[i].first;
        a[i].second = i;
     }
     sort(a.begin(), a.end());
     vector<int> b(n);

     int val =n;
     for(int i=0; i<n; i++)
     {
        b[a[i].second] = val;
        val--;
     }
     for(int i=0; i<n; i++)
     {
        cout<<b[i]<<" ";
     }
     cout<<endl;

   }
    return 0;
}