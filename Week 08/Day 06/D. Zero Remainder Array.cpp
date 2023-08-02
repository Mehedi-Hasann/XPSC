#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;      cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll ar[n+5];
        map<ll,ll>mp;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            mp[(ar[i]%k)]++;
        }
        ll ans = 0;
        for(auto it = mp.begin();it != mp.end();it++){
            ll p = it->first;
            ll q = it->second;
            if(p!=0){
                ll val = q*k-p;
                ans = max(ans,val);
            }
        }
        if(ans!=0)
            cout<<ans+1<<endl;
        else{
            cout<<ans<<endl;
        }
    }
    return 0;
}