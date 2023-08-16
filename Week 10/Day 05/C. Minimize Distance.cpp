#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;      cin>>t;
    while(t--)
    {
        ll n,m,d,id = -1;
        cin>>n>>m>>d;
        ll ar[n+5];
        for(ll i = 1;i<=m;i++){
            cin>>ar[i];
        }
        ll pre = 1,now,ans = 1;
        for(ll i = 1; i<=m;i++)
        {
            int val = 0;
            if((ar[i]-pre-2)>0)
                val = (ar[i]-pre-2)/d;
            pre = ar[i];
            ans += val;
            if(ar[i] != pre+d){
                ans++;
            }
           cout<<val<<' ';
        }
        cout<<endl;
        cout<<ans<<endl;
    }
    return 0;
}