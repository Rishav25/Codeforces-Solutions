#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long int



bool checkPal(vector<int> arr, int n)
{
    vector<int> a = arr;
    reverse(arr.begin(),arr.end());
    if(a==arr)
        return 1;
    else
        return 0;
}

bool util(vector<int> arr, int x)
{
    int n = arr.size();
    vector<int> new_arr;
    for(int i=0;i<n;i++)
    {
        if(arr[i] != x)
            new_arr.push_back(arr[i]);
    }
    int s = new_arr.size();
    if(checkPal(new_arr,s))
        return 1;
    else
        return 0;
}

void solve(vector<int> arr,int n)
{
    if(checkPal(arr,n))
    {
        cout<<"YES"<<endl;
        return;
    }

    int l=0,r=n-1;
    while(l<=r)
    {
        if(arr[l] != arr[r])
            break;
        l++;
        r--;
    }

    if(util(arr,arr[l]))
    {
        cout<<"YES"<<endl;
        return;
    }
    else if(util(arr,arr[r]))
    {
        cout<<"YES"<<endl;
        return;
    }
    else
    {
        cout<<"NO"<<endl;
        return;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> arr;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            arr.push_back(x);
        }
        solve(arr,n);
    }
    return 0;
}