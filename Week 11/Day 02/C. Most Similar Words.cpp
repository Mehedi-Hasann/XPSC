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
        int a,b;
        cin>>a>>b;
        char ar[a+1][b+1];
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++)
                cin>>ar[i][j];
        }
        int ans = INT_MAX,val = 0;
        for(int k=0;k<a-1;k++)
        {
            for(int i=k+1;i<a;i++)
            {
                val = 0;
                for(int j=0;j<b;j++)
                {
                    val+=abs(ar[k][j]-ar[i][j]);
                }
                ans = min(ans,val);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}