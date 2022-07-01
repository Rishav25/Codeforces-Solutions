#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define long long long int

int solve(int a,int b)
{
    int ans = 0;
    if(a == b)
        return ans;
    return ans = 1 + min(solve(a+1,b),solve(a,b+1),solve(a|b,b));
}

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<solve(a,b)<<endl;
    }
    return 0;
}