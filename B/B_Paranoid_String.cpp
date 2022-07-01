#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

//here the key is that if the last 2 numbers of the substring are same
//it cannot be paranoid
//so to add the number of substrings that can be formed till an index i
//we add (i+1) to the number
//example rishav index 5 has v
//number of substrings ending with v is 5+1 = 6
//rishav,ishav,shav,hav,av,v
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            //for every time we move forward we consider that the current letter is also a 
            //substring so we increment ans with 1
            ans++;
            //if last 2 are not same we add the substrings that will end with these 2 at last
            if(i>0 && s[i] != s[i-1])   
                ans+=i;
        }
        cout<<ans<<endl;
    }
    return 0;
}