#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n, x;
   cin>>n>>x;

   int arr[n];
   set<int> st;
   for(int i=0; i<n; i++ )
   {
    cin>>arr[i];
    st.insert(arr[i]);
   }
   int op = 0;

   for(int i=0; i<x; i++)
   {
    if(st.count(i)==0)
    {
         op++;
    }
   }
   if(st.count(x))
   {
    op++;
   }
   cout<<op<<endl;
    return 0;
}