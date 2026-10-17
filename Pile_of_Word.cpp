#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1, s2;
        cin>>s1>>s2;
        bool same = false;

        for(int i=0; i<s1.size(); i++)
        {   
            same = false;
            for(int j=0; j<s2.size(); j++)
            {
               if(s1[i]==s2[j])
               {
                same = true;

               }
            
            }
        }
        if(same)
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }

    }
    return 0;
}