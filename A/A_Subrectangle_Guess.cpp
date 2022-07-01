#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int mx = INT_MIN;
    int mxi = -1,mxj=-1;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j] > mx)
            {
                mx = a[i][j];
                mxi = i;
                mxj = j;
            }
        }
    int ans = max(n-mxi,mxi+1)*max(m-mxj,mxj+1);
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