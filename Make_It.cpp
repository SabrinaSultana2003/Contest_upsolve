#include<bits/stdc++.h>
using namespace std;
int dp[100005];
int canReach(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    if(dp[n]!=-1)
    {
        return dp[n];
    }
    if(n%2==0)
    {
       dp[n] = canReach(n/2) || canReach(n-3);
       return dp[n];
    } 
    else
    {
        dp[n] = canReach(n-3);
        return dp[n];
    }
}
int main()
{
    int t;
    cin>>t;
    memset(dp, -1, sizeof(dp));
    while(t--)
    {
        int n;
        cin>>n;
        if(canReach(n))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
   
    return 0;
}