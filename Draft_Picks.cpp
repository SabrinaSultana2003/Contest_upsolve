#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
     int n,k;
     cin>>n>>k;
     
     vector<int> player(n);
     int dir=1;
     while(k>0){
    if(dir==1){
     for(int i=0; i<n; i++)
     {
        if(k==0)
        break;
        player[i]+=k;
        k--;
}
      dir =0;
     }
    
 else{
    for(int i=n-1; i>=0; i--)
    {
            if(k==0)
            break;
            player[i]+=k;
            k--;

    }
    dir=1;
 }
}
 int mx =0;
 
 for(int i=0; i<n; i++)
 {
     mx = max(mx, player[i]);
 }
 cout<<mx<<endl;
}
     

    return 0;
}