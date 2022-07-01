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
        int p,m;
        cin>>p>>m;
        int groups = (p+m)/4;
        int ans = min(min(p,m),groups);
        cout<<ans<<endl;
    }
    return 0;
}