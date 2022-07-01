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
        int n,s;
        cin>>n>>s;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=a[i];
        if(s>sum)
        {
            cout<<-1<<endl;
            continue;
        }
        if(s == sum)
        {
            cout<<0<<endl;
            continue;
        }
        int prefix[n];
        prefix[0] = a[0];
        for(int i=1;i<n;i++)
            prefix[i] = prefix[i-1] + a[i];
        int start[sum+1],end[sum+1];
        int currSum = prefix[0];
        start[prefix[0]] = 0;
        for(int i=1;i<n;i++)
        {
            if(prefix[i] == currSum)
                continue;
            else
            {
                end[currSum] = i-1;
                currSum = prefix[i];
                start[currSum] = i;
            }
        }
        end[currSum] = n-1;
        int ans = 0;
        for(int i=;i<=sum-s;i++)
        {
            int deletions = 
        }
    }
    return 0;
}