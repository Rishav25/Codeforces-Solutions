#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++)
        cin>>v[i];
    bool allZero = true;
    
    for(int i=1;i<=n;i++)
        if(v[i] != 0)
        {
            allZero = false;
            break;
        }
    
    if(allZero)
    {
        cout<<0<<endl;
        return;
    }
    
    int ans = 0;
    bool flag = false;
    for(int i=1;i<=n;i++)
    {
        if(v[i] != 0)
            flag = true;
        else
            if(flag)
            {
                ans++;
                flag = false;
            }
    }
    if(flag)
        ans++;
    int val = 2;
    cout<<min(ans,val)<<endl;
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