#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

//we keep a track of the current value of a position
//if operation of type 1 is performed we change the 
//currval[idx] to number and proceed so on
//if we make operation of 2nd type we multiply the no*n and we update a variable 
//xd and clear the map which has currVal
//next time when we perform operation of type 1 we take currVal[idx] as xd and
//we update the currVal[idx] too 
void solve()
{
    int n,q;
    cin>>n>>q;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++)
        cin>>v[i];
    int sum = 0;
    for(int i=1;i<=n;i++)
        sum+=v[i];
    map<int,int> currVal;
    for(int i=1;i<=n;i++)
        currVal[i] = v[i];
    int xd = -1;
    vector<int> ans;
    for(int i=0;i<q;i++)
    {
        int qtype;
        cin>>qtype;
        if(qtype == 1)
        {
            int idx,no;
            cin>>idx>>no;
            if(!currVal[idx])
                currVal[idx] = xd;
            sum = sum - currVal[idx] + no;
            currVal[idx] = no;
            ans.push_back(sum);
        }
        if(qtype == 2)
        {
            int no;
            cin>>no;
            sum = no*n;
            currVal.clear();
            xd = no;
            ans.push_back(sum);
        }
    }
    for(auto x : ans)
        cout<<x<<endl;
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}