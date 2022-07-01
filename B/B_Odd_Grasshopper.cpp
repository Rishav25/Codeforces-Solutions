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
        int c,n;
        cin>>c>>n;
        int p = n%4;
        int s = (n-p) + 1;
        for(int i=s;i<=n;i++)
        {
            if(c%2 == 0)
                c = c - i;
            else
                c = c + i;
        }
        cout<<c<<endl;
    }
    return 0;
}