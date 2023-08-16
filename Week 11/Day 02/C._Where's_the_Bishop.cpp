#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        char ch[8][8];
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>ch[i][j];
            }
        }
        for(int i=0;i<8;i++)
        {
            for(int j=0; j<8; j++)
            {
                if(ch[i][j]=='#' and ch[i-1][j-1]=='#' and ch[i-1][j+1]=='#' and ch[i+1][j-1]=='#' and ch[i+1][j+1]=='#')
                {
                    cout<<i+1<<' '<<j+1<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}