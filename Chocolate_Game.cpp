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
     int tot=0;
     int a[n];
     for(int i=0; i<n; i++)
     {
        cin>>a[i];
     }
     for(int i=0; i<n; i++)
     {
         tot+=a[i];
     }
     int alice=0, bob =0;
     int ones =0;
     for(int i=0; i<n; i++)
     {
        if(a[i]%2==0)
        {
            if(tot%2==0)
            {
                alice+=a[i];
            }
            else
            {
                bob+=a[i];
            }
        }
        else
        {
            ones++;
            a[i]--;
            if(tot%2==0)
            {
                alice+=a[i];
            }
            else
            {
                bob+=a[i];
            }
        
        }
     }

     if(ones%2==0)
     {
        alice+=ones/2;
        bob+=ones/2;
     }
     else
     {
        if(tot%2==0)
        {
            alice+=(ones/2)+1;
            bob+=ones/2;
        }
        else
        {
            bob+=(ones/2)+1;
            alice+=(ones/2);
        }
     }
     cout<<alice<<endl;
    }
    return 0;
}