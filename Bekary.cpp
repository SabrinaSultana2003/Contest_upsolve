#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,k;
   cin>>n>>k;
   int cost;
  int totalprice = n*100;
  int totalpricewithbribe = k+(60*n);

  if(totalprice<totalpricewithbribe)
  {
    cost = totalprice;
  }
  else
  {
    cost = totalpricewithbribe;
  }

   cout<<cost<<endl;
    return 0;
}