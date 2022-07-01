#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n,q;
    cin>>n>>q;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end(),greater<>());
    int pre[n+1];
    pre[0] = 0;
    pre[1] = v[0];
    for(int i=1;i<n;i++)
        pre[i+1] = pre[i] + v[i];
    for(int i=0;i<q;i++)
    {
        int x,y;
        cin>>x>>y;
        int ans;
        int a1 = pre[x];
        int a2 = pre[x-y];
        ans = a1-a2;
        cout<<ans<<endl;
    }
    return;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    return 0;
}