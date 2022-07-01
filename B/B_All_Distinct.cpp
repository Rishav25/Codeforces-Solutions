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
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        int delReq = 0;
        for(auto x : mp)
            delReq+=(x.second-1);
        
        if(delReq%2)
            cout<<mp.size()-1<<endl;
        else
            cout<<mp.size()<<endl;
    }
    return 0;
}