#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long int

const int N=3e5+5;

void solve(){
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    vector<set<int> >v(3);
    int j;
    for(int i=0;i<s.size();i++)
        v[s[i]-'a'].insert(i);
 
    for(auto it:t)
    {
    
      if(v[it-'a'].empty())
      {
        cout<<"NO"<<endl;
        return;
      }
 
      int pos=*(v[it-'a'].begin());
      v[it-'a'].erase(v[it-'a'].begin());
      if(it=='a')
      {
        int p=N;
        int q=N;
        if(!v[1].empty())
             p=*(v[1].begin());
        if(!v[2].empty())
             q=*(v[2].begin());
        if(pos>p || pos>q)
        {
            cout<<"NO"<<endl;
            return;
        }
      }
      else if(it=='b')
      {
        int q=N;
        if(!v[2].empty())
            q=*(v[2].begin());
        if(pos>q)
        {
            cout<<"NO"<<endl;
            return;
        }
      }
        else 
        {
            int p=N;
            if(!v[0].empty())
                p=*(v[0].begin());
            if(pos>p)
            {
                cout<<"NO"<<endl;
                return;
            }
        }
    }
 
    cout<<"YES"<<endl;
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