#include<bits/stdc++.h>
using namespace std;
int dp[35];
int Tetranacci(int t)
{
    if(t==0)
    {
        return 0;
    }
    if(t==1 || t ==2)
    {
        return 1;
    }
    if(t==3)
    {
        return 2;
    }
    if(dp[t]!=-1)
    {
        return dp[t];
    }

        dp[t] = Tetranacci(t-1)+Tetranacci(t-2)+Tetranacci(t-3)+Tetranacci(t-4);
        return dp[t];
}
int main()
{
   memset(dp, -1, sizeof(dp));
   int t;
   cin>>t;
   cout<<Tetranacci(t);

    return 0;
}