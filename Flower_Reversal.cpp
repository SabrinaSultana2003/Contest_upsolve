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
     
     string s;
     cin>>s;
     int ans =0;
     int segment = 1;

     for(int i=1; i<n; i++)
     {
        if(s[i]==s[i-1])
        {
            ans++;
        }
        else
        {
            segment++;
        }
     }
       if(segment<=2)
       {
          cout<<ans<<endl;
       }
       else if(segment== 3)
       {
        cout<<ans+1<<endl;
       }
       else
       {
         cout<<ans+2<<endl;
       }
   }
    return 0;
}