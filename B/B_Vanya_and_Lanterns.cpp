#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n,l;
    cin>>n>>l;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    double dist = 0.0;
    for(int i=1;i<v.size();i++)
        dist = max((double)v[i]-v[i-1],(double)dist);
    double ans = (double)((double)dist/(double)2);
    double sDiff = (double)(v[0] - 0);
    double eDiff = (double)(l - v[n-1]);
    ans = max({ans,sDiff,eDiff});
    cout<<fixed<<ans<<endl;
    return;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
    return 0;
}
