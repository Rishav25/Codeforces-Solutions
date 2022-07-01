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
        n--;
        int msb = 30;
        for(;msb>=0;msb--)
        {
            if(n & (1<<msb))
                break;
        }
        int x = (1<<msb) - 1;
        for(int i=n;i>x;i--)
            cout<<i<<" ";
        for(int i=0;i<=x;i++)
            cout<<i<<" ";

        cout<<endl;
    }
    return 0;
}