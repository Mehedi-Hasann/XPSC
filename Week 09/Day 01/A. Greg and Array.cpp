#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    ll n,m,t;
    cin>>n>>m>>t;
    map<ll,ll>mp,ans;
    ll ar[n+5];
    for(ll i=0;i<n;i++){
        cin>>ar[i];
    }
    vector<ll>mr[m+2];
    for(ll i=1;i<=m;i++){
        ll u,v,w;
        cin>>u>>v>>w;
        mr[i].push_back(u);
        mr[i].push_back(v);
        mr[i].push_back(w);
    }
    while (t--)
    {
        ll u,v;
        cin>>u>>v;
        mp[u]++;
        mp[v+1]--;
    }
    for(ll i=1;i<=m;i++){
        mp[i] += mp[i-1];
    }
    for(ll i=1;i<=m;i++){
        if(mp[i]!=0){    
            ans[mr[i][0]] += (mp[i]*mr[i][2]);
            ans[mr[i][1]+1] -= (mp[i]*mr[i][2]);
        }
    }
    for(ll i=1;i<=n;i++){
        ans[i] += ans[i-1];
    }
    for(auto it = 1; it<=n; it++){
        cout<<ans[it] + ar[it-1]<<' ';
    }
    cout<<endl;
    return 0;
}