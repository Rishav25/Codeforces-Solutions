#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,s;
    cin>>m>>s;
    vector<vector<string>> min (102,vector<string>(902));
    vector<vector<string>> max (102,vector<string>(902));
    for(int i=0;i<102;i++)
        for(int j=0;j<902;j++)
        {
            min[i][j] = "-1";
            max[i][j] = "-1";
        }

    min[1][0] = "0";
    max[1][0] = "0";

    for(int i=1;i<=100;i++)
    {
        string s = "1";
        int zeroes = i - 1;
        for(int j=1;j<=zeroes;j++)
            s+="0";
        min[i][1] = s;
        max[i][1] = s;
    }
    for(int i=1;i<=100;i++)
    {
        int minp = i-1;
        int maxp = 0;
        for(int j=2;j<=900;j++)
        {
            string s1 = min[i][j-1];
            string s2 = max[i][j-1];
            if(s1[minp] == '9')
                minp--;
            if(s2[maxp] == '9')
                maxp++;
            if(minp<0 || maxp>i)
                break;
            s1[minp]++;
            s2[maxp]++;
            min[i][j] = s1;
            max[i][j] = s2;
        }
    }
    cout<<min[m][s]<<" "<<max[m][s]<<endl;
    return 0;
}