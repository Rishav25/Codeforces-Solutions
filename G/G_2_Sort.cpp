#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    //here we check if we can reach the current element from the previous element
    //and then we apply a simple time complexity hack where we
    //add all possible k+1 size combinations with continuos c elements
    //example 1 1 1 1 1     k = 2
    //here we have c = 5 so instead of checking for size 3 many times its better to do
    //c-(k+1)+1
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    int util[n] = {0};
    util[0] = 1;
    
    for(int i=1;i<n;i++)
        if(v[i] > v[i-1]/2)
            util[i] = 1;

    int ans = 0;
    for(int i=0;i<n-k;i++)
    {
        int j=i,c=0;
        do
        {
            c++;
            j++;
        }while(util[j] == 1);
        if(c>=k+1)
            ans+=(c-(k+1)+1);
        i=j-1;
    }
    cout<<ans<<endl;
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