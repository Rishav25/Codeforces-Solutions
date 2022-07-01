#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

string solve(vector<int>v, int n)
{
    //removing all zeroes at end
    while(!v.empty() && v.back() == 0)
        v.pop_back();
    int s = v.size();
    if(s == 0)
        return "YES";
    if(s == 1)
        return "NO";
    if(v[0]<=0 || v.back()>0)
        return "NO";
    
    //this is the number of moves required to move right from a previous point
    //this value should be greater than 0 at all times since we are checking for values
    //which are on the right of the prev
    //since we have reached right
    //it means that the value of prev should be greater than 0
    //at each point we can find the number of moves made on right and number of moves made 
    //left
    //example
    //left moves  0   1    3   6     10
    //            1   2    3   4    -10
    //right moves 1   3    6   10     0
    //if we have made 10 left moves from a point means we have made 10 right moves
    //from the previous point
    //we are always calculating this previous value which throughout should be 
    //greater than 0 so that we can move to right from previous
    //
    //left moves               0      1
    //             1     -1    1     -1
    //right moves         0    1
    //here we get error since there are 0 right moves from index 1 but we have numbers on
    //right, hence this is a no case
    int prev = 0;
    for(int i=v.size()-1;i>0;i--)
    {
        prev = prev - v[i];
        if(prev<=0)
            return "NO";
    }
    //at last prev = number of right moves from 0th position
    //this should be equal to 0th position value
    if(prev != v[0])
        return "NO";

    return "YES";
}
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        cout<<solve(v,n)<<endl;
    }
    return 0;
}