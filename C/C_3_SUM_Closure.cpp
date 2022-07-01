#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    
    int pc = 0 , nc = 0, zc = 0, sum  = 0;
    for(int i=0;i<n;i++)
    {
        if(v[i] > 0)
            pc++;
        if(v[i] < 0)
            nc++;
        if(v[i] == 0)
            zc++;
        sum+=v[i];
    }
    if(pc == 1 && nc == 0)
    {
        cout<<"YES"<<endl;
        return;
    }
    else if(pc == 0 && nc == 1)
    {
        cout<<"YES"<<endl;
        return;
    }
    else if(pc == 0 && nc == 0)
    {
        cout<<"YES"<<endl;
        return;
    }
    else if(pc == 1 && nc == 1)
    {
        if(sum == 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else if(pc<=2 && nc<=2 && zc == 0)
    {
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
            mp[v[i]]++;
        
        for(int i=0;i<n-2;i++)
            for(int j=i+1;j<n-1;j++)
                for(int k=j+1;k<n;k++)
                {
                    int sum = v[i] + v[j] + v[k];
                    if(mp.find(sum) == mp.end())
                    {
                        cout<<"NO"<<endl;
                        return;
                    }
                }
        
        cout<<"YES"<<endl;
        return;
    }
    else
        cout<<"NO"<<endl;
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