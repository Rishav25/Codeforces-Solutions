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
        vector<string> board;
        for(int i=0;i<8;i++)
        {
            string row;
            cin>>row;
            board.push_back(row);
        }
        int pos[8];
        for(int i=0;i<8;i++)
        {
            string row = board[i];
            int hash = 0;
            for(int i=0;i<8;i++)
                if(row[i] == '#')
                    hash++;
            pos[i] = hash;
        }
        int row,col;
        for(int i=1;i<7;i++)
            if(pos[i] == 1 && pos[i-1] == 2 && pos[i+1] == 2)
            {    
                row = i;
                break;
            }
        string str = board[row];
        for(int i=0;i<8;i++)
            if(str[i] == '#')
            {
                col = i;
                break;
            }
        
        row = row+1;
        col = col+1;

        cout<<row<<" "<<col<<endl;
        
    }
    return 0;
}