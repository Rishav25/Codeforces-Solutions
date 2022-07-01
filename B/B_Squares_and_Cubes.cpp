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
        int n;
        cin>>n;
        int sq = sqrt(n);
        int cu = cbrt(n);
        int x = cbrt(sq);
        cout<<sq+cu-x<<endl;      
    }
    return 0;
}