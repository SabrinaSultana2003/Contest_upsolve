#include<bits/stdc++.h>
using namespace std;
int main()
{
   int l, r;
   cin>>l>>r;
   bool flag = false;
   for(int i=l; i<=r; i++)
   {
     if(i%2==0)
     {
        flag = true;
        break;
     }
   }
   if(flag)
   {
    cout<<"Yes"<<endl;
   }
   else
   {
    cout<<"No"<<endl;
   }
    return 0;
}