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
        int q,H,M;
        cin>>q>>H>>M;
        int time = 60*H + M, val = 1440;
        while(q--)
        {
            int a,b,ans;
            cin>>a>>b;
            ans = a*60 + b - time;
            if(ans<0)
                ans = 1440 + ans;
            val = min(ans,val);             
        }
        cout<<val/60<<' '<<val-60*(int)(val/60)<<endl;
    }
    return 0;
}