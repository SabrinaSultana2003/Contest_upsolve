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
     int a[n];
     for(int i=0; i<n; i++)
     {
        cin>>a[i];
     }
     int odd=0, even=0;
     for(int i=0; i<n; i++)
     {
        if(a[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
     }
     if(odd==even)
     {
        cout<<n<<endl;
     }
     else
     {
        int mn = min(odd, even);
        cout<<2*mn+1<<endl;
     }
   }
    return 0;
}