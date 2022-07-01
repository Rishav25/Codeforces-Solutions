#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    
    vector<int> sa(n);
    vector<int> sb(n);
    sa = a;
    sort(sa.begin(),sa.end());
    sb = b;
    sort(sb.begin(),sb.end());

    vector<pair<int,int>> spair;
    vector<pair<int,int>> nspair;

    for(int i=0;i<n;i++)
        spair.push_back({sa[i],sb[i]});
    for(int i=0;i<n;i++)
        nspair.push_back({a[i],b[i]});

    vector<pair<int,int>> ans;
    int flag = 1;

    for(int i=0;i<n;i++)
    {
        flag = 0;
        for(int j=i;j<n;j++)
        {
            if(spair[i] == nspair[j])
            {
                flag = 1;
                if(i == j)
                    continue;
                swap(nspair[i],nspair[j]);
                ans.push_back({j+1,i+1});
            }
        }
        if(!flag)
        {
            cout<<"-1"<<endl;
            return;
        }
    }

    cout<<ans.size()<<endl;
    for(auto x : ans)
        cout<<x.first<<" "<<x.second<<endl;
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