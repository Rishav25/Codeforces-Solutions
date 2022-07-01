#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    
    if(n%2)
    {
        cout<<"Mike"<<endl;
        return;
    }
    int mn = INT_MAX;
    for(int i=0;i<n;i++)
        mn = min(a[i],mn);
    for(int i=0;i<n;i++)
        a[i]-=mn;
    
    for(int i=0;i<n;i++)
    {
        if(a[i] == 0)
        {
            if(i%2 == 0)
                cout<<"Joe"<<endl;
            else
                cout<<"Mike"<<endl;
            return;
        }
    }
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