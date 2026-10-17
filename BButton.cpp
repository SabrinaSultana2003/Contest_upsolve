#include<bits/stdc++.h>
using namespace std;
int main()
{
   int A, B;
   cin>>A>>B;

   if(A+A-1> A+B)
   {
    cout<<A+A-1;
   }
   else if(B+B-1>A+B)
   {
    cout<<B+B-1;
   }
   else
   {
    cout<<A+B;
   }
    return 0;
}