#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        int opr =0;
        while(!s.empty())
        {
            string aftererase="";
            for(int i=1; i<s.size(); i+=2)
            {
                aftererase.push_back(s[i]);
            }
            s= aftererase;
            opr++;
        }
        cout<<opr<<endl;
    }
   
    return 0;
}