#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

string solve(int map[10])
{   
    for(int i=0;i<=9;i++)
        for(int j=0;j<=9;j++)
            for(int k=0;k<=9;k++)
            {
                if((i+j+k)%10 == 3)
                {
                    map[i]--;
                    map[j]--;
                    map[k]--;
                    if(map[i]>=0 && map[j]>=0 && map[k]>=0)
                        return "YES";
                    map[i]++;
                    map[j]++;
                    map[k]++;
                }
                else
                    continue;
            }
    return "NO";
}

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++)
        {
            int number;
            cin>>number;
            a.push_back(number);
        }
        for(int i=0;i<n;i++)
            a[i] = a[i]%10;

        int map[10] = {0};
        for(int i=0;i<n;i++)
            map[a[i]]++;

        cout<<solve(map)<<endl;
    }
    return 0;
}