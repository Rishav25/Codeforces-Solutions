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
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int max_index;
        for(int i=0;i<n;i++)
        {
            if(a[i] == n)
            {
                max_index = i;
                break;
            }
        }
        if(max_index != 0 && max_index != n-1)
            cout<<-1<<endl;
        else
        {
            reverse(a,a+n);
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
    }
    return 0;
}