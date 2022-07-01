#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>v[i][j];
    
    vector<int> ans;
    bool flag = false;
    for(int i=0;i<n;i++)
    {
        vector<int> v1(m);
        v1 = v[i];
        sort(v1.begin(),v1.end());
        int c = 0;
        for(int j=0;j<m;j++)
        {
            if(v[i][j] != v1[j])
            {
                flag = true;
                ans.push_back(j);
                c++;
            }
            if(c>2)
            {
                cout<<-1<<endl;
                return;
            }
        }
        if(flag)
            break;
    }
    if(!flag)
    {
        cout<<1<<" "<<1<<endl;
        return;
    }
    int l=ans[0],r=ans[1];
    for(int i=0;i<n;i++)
    {
        vector<int> v1(m);
        v1 = v[i];
        sort(v1.begin(),v1.end());
        swap(v[i][l],v[i][r]);
        if(v[i] != v1)
        {
            cout<<-1<<endl;
            return;
        }
    }
    cout<<l+1<<" "<<r+1<<endl;
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