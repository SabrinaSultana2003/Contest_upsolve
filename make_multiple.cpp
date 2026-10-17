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
     if(n%3==0)
     {
       cout<<0<<endl;
     }
     else if((n+1)%3==0)
     {
        cout<<1<<endl;
     }
     else
     {
        int nxt=0;
        for(int i=1; i<=5; i++)
        {
            if((n+i)%5==0)
            {
                nxt = n+i;
                break;
            }
        }
            if(nxt%3==0)
            {
                cout<<1<<endl;
            }
            else{
                cout<<2<<endl;
            }

        
     }
   }
    return 0;
}