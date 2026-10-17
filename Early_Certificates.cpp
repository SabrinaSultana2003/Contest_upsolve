#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int n,m;
      cin>>n>>m;
      string s1, s2;
      cin>>s1>>s2;
      string ans="";

      int len=min(s1.size(), s2.size());
      
      for(int i=0; i<len; i++)
      {
        if(s1[i]==s2[i])
        {
          ans+=s1[i];
        }
        else
        {
            break;
        }
      }
      cout<<ans<<endl;
   }
    return 0;
}