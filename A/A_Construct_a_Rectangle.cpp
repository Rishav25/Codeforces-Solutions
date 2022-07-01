#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

void solve()
{
    int l1,l2,l3;
    cin>>l1>>l2>>l3;
    if(l1 == l2 && l2 == l3 && l1 == l3)
    {
        if(l1%2)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        return;
    }
    if(l1 == l2 || l2 == l3 || l3 == l1)
    {
        if(l1 == l2)
        {
            if(l3%2)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
            return;
        }
        if(l2 == l3)
        {
            if(l1%2)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
            return;
        }
        if(l1 == l3)
        {
            if(l2%2)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
            return;
        }
    }
    vector<int> l;
    l.push_back(l1);
    l.push_back(l2);
    l.push_back(l3);
    sort(l.begin(),l.end());
    if(l[0]+l[1] != l[2])
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
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