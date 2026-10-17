#include<bits/stdc++.h>
using namespace std;
int main()
{
   int s, t;
   cin>>s>>t;
   int cnt=0;
   int a,b,c;

   for(a=0; a<=s; a++)
   {
    for(b=0; b<=s-a; b++)
    {
        for(c=0; c<=s-a-b; c++)
        {
            if( a*b*c<=t){
            cnt++;
            }
        }
    }

   }
   cout<<cnt;
    return 0;
}