#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int func(string key)
{
    unordered_map<char,int> mp;
    int i=0;
    for(auto c : key)
        mp.insert({c,i++});
    
    string word;
    cin>>word;
    int ans = 0;
    for(int i=1;i<word.length();i++)
        ans = ans + abs(mp[word[i+1]] - mp[word[i]]);
    
    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<func(s)<<endl;
    }
    return 0;
}