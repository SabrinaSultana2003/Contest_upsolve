#include<bits/stdc++.h>
using namespace std;
int main()
{
 ios::sync_with_stdio(false);
 cin.tie(NULL);
 vector<pair<char,int>> even;
 vector<pair<char,int>> odd;
   int n;
   cin>>n;
   string s;
   cin>>s;
 map<char, int> freq;

 for(int c : s)
 {
    freq[c]++;
 }
 class cmp
 {
    public :
    bool operator()(pair<char,int> a, pair<char,int>b){
    if(a.second!=b.second)
    {
        return a.second<b.second;

    }
    else
    {
        return a.first<b.first;
    }
 }
};
for(auto it :freq)
{
    if(it.second%2==0)
    {
     even.push_back({it.first,it.second});
    }
    else
    {
        odd.push_back({it.first, it.second});
    }
}
sort(odd.begin(),odd.end(),cmp());
sort(even.begin(),even.end(),cmp());


string result="";
for(auto v : odd)
{
    result.append(v.second, v.first);
}
for(auto v : even )
{
    result.append(v.second, v.first);
}

cout<<result<<endl;

   

    return 0;
}