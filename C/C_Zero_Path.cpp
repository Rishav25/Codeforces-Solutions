#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

int abs1(int a)
{
    if(a>0)
        return a;
    else
        return -a;
}

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> a(n+1,vector<int>(m+1,0));
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>a[i][j];
    
    //if n+m is even the path will be of odd length
    //an odd length path can never give sum as 0
    if((n+m)%2 == 0)
    {
        cout<<"NO"<<endl;
        return;
    }

    //here we find the minimum and the maximum sum
    //till the point i,j in the matrix
    //after creating the dp matrix we check the last element of both the
    //dp tables
    //if minValue<=0<=maxValue
    //it means it is possible to obtain 0 sum at the last position

    int dp[n+1][m+1],dp2[n+1][m+1];
    for(int i=0;i<=n;i++)
        dp[i][0] = INT_MAX;
    for(int i=0;i<=m;i++)
        dp[0][i] = INT_MAX;
    for(int i=0;i<=n;i++)
        dp2[i][0] = INT_MIN;
    for(int i=0;i<=m;i++)
        dp2[0][i] = INT_MIN;
    
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
        {
            if(i==1 && j ==1)
            {
                dp[i][j] = a[i][j];
                dp2[i][j] = a[i][j];
            }
            else
            {
                dp[i][j] = min(dp[i-1][j] + a[i][j] , dp[i][j-1] + a[i][j]);
                dp2[i][j] = max(dp2[i-1][j] + a[i][j] , dp2[i][j-1] + a[i][j]);
            }
        }

    int minValue,maxValue;
    minValue = dp[n][m];
    maxValue = dp2[n][m];
    if(minValue<=0 && maxValue>=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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