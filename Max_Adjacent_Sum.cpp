#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   int n;
   cin>>n;

   vector<ll> a(n+1);
   vector<ll> evenvalue;

   for(int i=1; i<=n; i++)
   {
    cin>>a[i];
   }
   for(int i=2; i<=n; i+=2)
   {
      evenvalue.push_back(a[i]);

   }
   sort(evenvalue.begin(), evenvalue.end(), greater<ll>());
   
    ll maxeven = LLONG_MIN;
     for(int i = 0; i < evenvalue.size(); i++) {
       maxeven= max(maxeven, evenvalue[i]);
    }

ll mx = LLONG_MIN;
    for(int i=1; i<=n; i+=2){
        mx = max(mx, a[i] + maxeven);
    }

    cout << mx << endl;
    return 0;
}