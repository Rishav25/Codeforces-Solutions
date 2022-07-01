#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long int

bool check(int k,int a[], int b[], int n)
{
    int friends = 0;
    int richer = k-1, poorer = 0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]>=richer && b[i]>=poorer)
        {
            richer--;
            poorer++;
            friends++;
        }
        if(friends == k)
            return true;
    }
    return false;
}

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1] , b[n+1];
        for(int i=1;i<=n;i++)
            cin>>a[i]>>b[i];
        int ans = 0;
        int l = 1, r = n;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(check(mid,a,b,n))
                l = mid+1;
            else
                r = mid-1;
        }
        ans = r;
        cout<<ans<<endl;
    }
    return 0;
}