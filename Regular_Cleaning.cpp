
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int indx =0;
   for(int i=1; i<n; i++)
   {
    if(i*10>n)
    {
      indx = i*10;
      break;
    }
   }
   cout<<indx-n<<endl;
  
}