#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

//binary string 1110/111 = 2 always 
//binary string 0111/111 = 1 always
//so we find the postion of the first zero
//if zero in first half we take 0(rem string) & rem string
//if zero in second half we take (rem string)0 and rem string 
//odd even different consideration
//and if all 1s are there then any 2 substring with size greater than half and
//unique will do
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int zpos = -1, h = (n+1)/2;
    for(int i=0;i<n;i++)
        if(s[i] == '0' && zpos == -1)
        {
            zpos = i+1;
            break;
        }

    if(zpos == -1)
    {
        cout<<1<<" "<<n/2<<" "<<2<<" "<<1+ n/2<<endl;
        return;
    }
    if (n%2 == 0)
    {
        if(zpos <= n/2)
            cout<<zpos<<" "<<n<<" "<<zpos+1<<" "<<n<<endl;
        else
            cout<<1<<" "<<zpos<<" "<<1<<" "<<zpos-1<<endl;
        return;
    }
    else
    {
        if(zpos <= n/2)
            cout<<zpos<<" "<<n<<" "<<zpos+1<<" "<<n<<endl;
        else
            cout<<1<<" "<<zpos<<" "<<1<<" "<<zpos-1<<endl;
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
        solve();
    }
    return 0;
}