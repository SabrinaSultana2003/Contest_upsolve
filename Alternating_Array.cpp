#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--){
   int n;
   cin>>n;
   vector<int> a(n);
   int cnt =0;

   for(int i=0; i<n; i++)
   {
    cin>>a[i];
   }
  int step1 = 0, step2 = 0;

for(int i = 0; i < n; i++)
{
    if(i % 2 == 0)
    {
        if(a[i] % 2 != 0)
            step1++;
    }
    else
    {
        if(a[i] % 2 == 0)
            step1++;
    }

    if(i % 2 == 0)
    {
        if(a[i] % 2 == 0)
            step2++;
    }
    else
    {
        if(a[i] % 2 != 0)
            step2++;
    }
}

cout << min(step1, step2) << endl;
   }
   return 0;
}