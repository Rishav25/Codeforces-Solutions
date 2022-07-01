#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++)
        cin>>p[i];
    string s;
    cin>>s;
    vector<pair<int,int>> z;
    vector<pair<int,int>> o;
    for(int i=0;i<n;i++)
    {
        if(s[i] == '0')
            z.push_back({p[i],i});
        else
            o.push_back({p[i],i});
    }
    sort(z.begin(),z.end());
    sort(o.begin(),o.end());
    vector<int> q(n);
    int value = 1;
    for(int i=0;i<z.size();i++)
    {
        q[z[i].second] = value;
        value++;
    }
    for(int i=0;i<o.size();i++)
    {
        q[o[i].second] = value;
        value++;
    }
    for(int i=0;i<n;i++)
        cout<<q[i]<<" ";
    cout<<endl;
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