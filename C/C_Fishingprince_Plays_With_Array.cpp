#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

//here in this question I had thought right of breaking it down
//break it down to the maximum and store what the element in that position becomes
//and how many times does it appear in another array and then compute
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> v1(n);
    for(int i=0;i<n;i++)
        cin>>v1[i];
    int k;
    cin>>k;
    vector<int> v2(k);
    for(int i=0;i<k;i++)
        cin>>v2[i];
    
    vector<int> v1n(n);
    vector<int> v2n(k);
    for(int i=0;i<n;i++)
    {
        if(v1[i]%m != 0)
            v1n[i] = 1;
        else
        {
            int n = v1[i];
            int fact = 1;
            while(n%m == 0)
            {
                fact*=m;
                n/=m;
            }
            v1n[i] = fact;
            v1[i] = n;
        }
    }
    for(int i=0;i<k;i++)
    {
        if(v2[i]%m != 0)
            v2n[i] = 1;
        else
        {
            int n = v2[i];
            int fact = 1;
            while(n%m == 0)
            {
                fact*=m;
                n/=m;
            }
            v2n[i] = fact;
            v2[i] = n;
        }
    }
    int i=0,j=0;
    while(1)
    {
        if(i>=n && j>=k){cout<<"Yes"<<endl;return;}
        if(i>=n || j>=k){cout<<"No"<<endl;return;}
        if(v1[i] != v2[j]){cout<<"No"<<endl;return;}
            
        int c = min(v1n[i],v2n[j]);
        v1n[i]-=c;
        v2n[j]-=c;

        if(v1n[i] == 0) i++;
        if(v2n[j] == 0) j++;
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
//note dont pass heavy arrays into the solve
//example if you make a dp array dont send it to solve let it be global