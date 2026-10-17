#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int freq[26]={0};
   
    for(char c : s)
    {
        freq[c -'a']++;
        
    }
    for(int i=0; i<26; i++)
    {
        if(freq[i]==0)
        {
            char ch = 'a'+i;
            cout<<ch;
            return 0;
        }
    }

cout<<"None";
    return 0;}
