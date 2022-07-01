#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int l,r;
    cin>>l>>r;
    int half = (r+1)/2;
    if(l>half)
    {
        cout<<r-l<<endl;
        return;
    }
    else
    {
        cout<<half-1<<endl;
        return;
    }
    return;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}