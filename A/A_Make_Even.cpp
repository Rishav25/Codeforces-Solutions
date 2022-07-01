#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long int

void solve(string n)
{
    int no = stoi(n);
    if(no%2 == 0)
    {
        cout<<0<<endl;
        return;
    }
    
    int firsteven = -1, s = n.length();

    for(int i=0;i<s;i++)
    {
        if(n[i]%2 == 0)
        {
            firsteven = i;
            break;
        }
    }
    if(firsteven == 0)
    {
        cout<<1<<endl;
        return;
    }
    else if(firsteven == -1)
    {
        cout<<-1<<endl;
        return;
    }
    else
    {
        cout<<2<<endl;
        return;
    }
}

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string n;
        cin>>n;
        solve(n);
    }
    return 0;
}