#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long int

int f(int x)
{
    return (x*(x+1))/2;
}

int f1(int x, int k)
{
    return ((x*k) - ((x*(x+1))/2));
}

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,x;
        cin>>k>>x;
        int ans = 0;
        int half_sum = (k*(k+1))/2;
        if(x>half_sum)
        {
            x = x - half_sum;
            ans = k;
            int l = 0, r = k-1, m;
            while(l<=r)
            {
                m = (l+r)/2;
                if(f1(m,k) >= x)
                    r = m-1;
                else
                    l = m+1;
            }
            ans = ans + (r+1);
        }
        else
        {
            int l = 0, r = k, m;
            while(l<=r)
            {
                m = (l+r)/2;
                if(f(m) >= x)
                    r = m-1;
                else
                    l = m+1;
            }
            ans = r+1;
        }
        ans = min(ans,(2*k)-1);
        cout<<ans<<endl;
    }
    return 0;
}