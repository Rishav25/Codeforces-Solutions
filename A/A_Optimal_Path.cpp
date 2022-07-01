#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n,m;
    cin>>n>>m;
    int sum = 0;
    for(int i=1;i<=m;i++)
        sum+=i;
    for(int i=2;i<=n;i++)
        sum+=(m*i);
    cout<<sum<<endl;
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