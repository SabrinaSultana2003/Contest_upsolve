#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n;
   cin>>n;
  bool found= false;
   while(n>0){
   int digit = n%10;
   if(digit==7)
   {
    found = true;
   }

   n =n/10;
}
if(found)
{
    cout<<"Lucky";
}
else
{
    cout<<"Not Lucky";
}

    return 0;
}