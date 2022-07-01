#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n,w;
    cin>>n>>w;
    int h = (w+1)/2;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    vector<int> idx;
    int flag = 0, cw = 0;
    for(int i=0;i<n;i++)
    {
        if(cw+a[i]<=w)
        {
            cw+=a[i];
            idx.push_back(i+1);
        }
        else if(a[i] >= h && a[i] <= w)
        {
            idx.clear();
            idx.push_back(i+1);
            cw = a[i];
        }
    }
    if(cw>=h && cw <= w)
    {
        cout<<idx.size()<<endl;
        for(auto i : idx)   
            cout<<i<<" ";
        cout<<endl;
    }
    else
        cout<<-1<<endl;
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