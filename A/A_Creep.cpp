#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int initZeroes,initOnes;
        cin>>initZeroes>>initOnes;
        for(int i=1;i<=min(initZeroes,initOnes);i++)
            cout<<"01";
        int remZeroes = initZeroes - min(initZeroes,initOnes);
        int remOnes = initOnes - min(initZeroes,initOnes);
        for(int i=1;i<=remZeroes;i++)
            cout<<"0";
        for(int i=1;i<=remOnes;i++)
            cout<<"1";
        cout<<endl;
    }
    return 0;
}