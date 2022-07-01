#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

int solve(int r,int c)
{
    if(r==1 && c==1)
        return 0;
    else if(r==1 || c==1)
        return 1;
    else
        return 2;
}

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c;
        cin>>r>>c;
        cout<<solve(r,c)<<endl;
    }
    return 0;
}