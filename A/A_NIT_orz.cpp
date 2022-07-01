#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n,x;
    cin>>n>>x;
    int ans = INT_MIN;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    for(int i=0;i<n;i++)
        ans = max(ans,v[i]|x);
    cout<<ans<<endl;
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
//note dont pass heavy arrays into the solve
//example if you make a dp array dont send it to solve let it be global