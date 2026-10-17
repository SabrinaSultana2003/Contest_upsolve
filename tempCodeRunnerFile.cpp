#include<bits/stdc++.h>
using namespace std;
int main()
{
   int A,B,T;
   cin>>A>>B>>T;
   int ans;

   for(int i=A; i<=T+0.5; i+=A)
   {
    ans+=B;
   }
   cout<<ans;
    return 0;
}