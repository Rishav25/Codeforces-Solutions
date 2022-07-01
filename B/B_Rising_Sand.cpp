#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int ans = 0;
    if(k == 1)
    {
        int num = n-2;
        ans = (n - 2 + 1)/2;
        cout<<ans<<endl;
        return;
    }
    for(int i=1;i<=n-2;i++)
    {
        if(v[i] > (v[i-1]+v[i+1]))
            ans++;
    }
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