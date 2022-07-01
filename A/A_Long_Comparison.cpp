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
        float n1,n2;
        int x1,x2,p1,p2;
        cin>>x1>>p1>>x2>>p2;
        n1 = x1, n2 = x2;
        float ten = 10;
        while(x1)
        {
            x1 = x1/ten;
            if(x1)
            {
                n1=n1/ten;
                p1++;
            }
        }
        while(x2)
        {
            x2 = x2/ten;
            if(x2)
            {
                n2 = n2/ten;
                p2++;
            }
        }
        if(p1==p2)
        {
            if(n1>n2)
                cout<<">"<<endl;
            else if(n1<n2)
                cout<<"<"<<endl;
            else 
                cout<<"="<<endl;
        }
        else if(p1>p2)
            cout<<">"<<endl;
        else
            cout<<"<"<<endl;
    }
    return 0;
}