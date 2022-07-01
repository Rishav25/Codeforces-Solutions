#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(auto c : s)
    {
        if(c == '1' || c == '4' || c == '6' || c == '8' || c == '9')
        {
            cout<<1<<endl<<c<<endl;
            return;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(s[i] == '2')
        {
            for(int j=i+1;j<n;j++)
            {
                if(s[j] == '2' || s[j] == '5' || s[j] == '7')
                {
                    cout<<2<<endl<<s[i]<<s[j]<<endl;
                    return;
                }
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        if(s[i] == '3')
        {
            for(int j=i+1;j<n;j++)
            {
                if(s[j] == '2' || s[j] == '3' || s[j] == '5')
                {
                    cout<<2<<endl<<s[i]<<s[j]<<endl;
                    return;
                }
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        if(s[i] == '5')
        {
            for(int j=i+1;j<n;j++)
            {
                if(s[j] == '2' || s[j] == '5' || s[j] == '7' )
                {
                    cout<<2<<endl<<s[i]<<s[j]<<endl;
                    return;
                }
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        if(s[i] == '7')
        {
            for(int j=i+1;j<n;j++)
            {
                if(s[j] == '2' || s[j] == '5' || s[j] == '7')
                {
                    cout<<2<<endl<<s[i]<<s[j]<<endl;
                    return;
                }
            }
        }
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
        solve();
    }
    return 0;
}