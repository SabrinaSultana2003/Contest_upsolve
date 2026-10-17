#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int row,col,seat;
      cin>>row>>col>>seat;
      int currRow;
      if(seat%col==0)
      {
        currRow = seat/col;
      }
      else
      {
        currRow = seat/col+1;
      }
      int mn = min(currRow, row-currRow+1);
      cout<<mn<<endl;


   }
    return 0;
}