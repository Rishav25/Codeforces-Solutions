#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long int

string func(string s, int n)
{
    int l=0,r=n/2;
    while(l<n/2 && r<n)
    {
        if(s[l++] != s[r++])
            return "NO";
    } 
    return "YES";
}

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.length();
        if(n%2)
            cout<<"NO"<<endl;
        else
            cout<<func(s,n)<<endl;
    }
    return 0;
}