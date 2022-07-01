#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int ans;
bool palindrome(string time)
{
    int l=0,r=3;
    while(l<r)
    {
        if(time[l] != time[r])
            return false;
        l++;
        r--;
    }
    return true;
}
void solve(int shr,int smin,int chr,int cmin,int xhr,int xmin,string s)
{
    string time;
    string hr = to_string(chr);
    string min = to_string(cmin);
    if(hr.size() == 1)
        hr = "0" + hr;
    if(min.size() == 1)
        min = "0" + min;
    time = hr + min;
    if(palindrome(time))
        ans++;
    if(chr == shr && cmin == smin)
        return;
    int cminInit = cmin;
    cmin = (cmin+xmin)%60;
    chr = (chr + xhr + ((cminInit+xmin)/60))%24;
    solve(shr,smin,chr,cmin,xhr,xmin,s);
}

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string hr = s.substr(0,2);
        string min = s.substr(3,2);
        int x;
        cin>>x;
        int shr,smin,xhr,xmin,chr,cmin;
        shr = stoi(hr);
        smin = stoi(min);
        xhr = x/60;
        xmin = x%60;
        cmin = (smin+xmin)%60;
        chr = (shr + xhr + ((smin+xmin)/60))%24;
        ans = 0;
        solve(shr,smin,chr,cmin,xhr,xmin,s);
        cout<<ans<<endl;
    }
    return 0;
}