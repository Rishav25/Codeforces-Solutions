#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int sum=0,a;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            sum+=a;
        }
        int ans = sum-m;
        cout<<max(ans,(long long)0)<<endl;
    }
    return 0;
}