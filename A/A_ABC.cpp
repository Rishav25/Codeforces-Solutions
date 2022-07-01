#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s == "1" || s == "0" || s == "01" || s == "10")
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;       
    }
    return 0;
}