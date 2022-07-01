#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

int sum(string s)
{
    int n = s.length();
    int sum = 0;
    for(int i=0;i<n-1;i++)
    {
        int t = (s[i] - '0')*10 + (s[i+1] - '0');
        sum+=t;
    }
    return sum;
}
//here we try to shift the first one from right to the rightmost and
//here we try to shift the first one from left to the leftmost
//during the second shift we wont change the position of the last value
//since if it is 1 we should not disturb it
//000001 is better than 100000 
void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=n-1;i>=0;i--)
    {
        if(s[i] == '1')
        {
            if(n-i-1<=k)
            {
                k-=n-i-1;
                swap(s[i],s[n-1]);
            }       
            break;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(s[i] == '1')
        {    
            if(i<=k)
            {
                swap(s[i],s[0]);
                break;
            }
        }
    }
    cout<<sum(s)<<endl;
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