    #include <iostream>
    #include <bits/stdc++.h>
    using namespace std;
    #define int long long int
     
    //here we have to take prefix sum of 1s and then
    //compute the remaining stuff
    vector<vector<int>> v(200001,vector<int>(19,0));
    void solve()
    {
        int l,r;
        cin>>l>>r;
        int maxOne = INT_MIN;
        for(int i=0;i<=18;i++)
            maxOne = max(maxOne,v[r][i]-v[l-1][i]);
        cout<<(r-l+1)-maxOne<<endl;
        return;
    }
     
    int32_t main()
    {
    	ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin>>t;
        for(int i=0;i<=18;i++)
        {
            int num = pow(2,i);
            int k = 0; 
            for(int j=num;j<=200000;j++)
            {
                v[j][i] = 1;
                k++;
                if(k == num)
                {
                    j = j+k;
                    k = 0;
                }
            }
        }
        for(int i=0;i<=18;i++)
            for(int j=1;j<=200000;j++)
                v[j][i] = v[j][i] + v[j-1][i];
        while(t--)
        {
            solve();
        }
        return 0;
    }