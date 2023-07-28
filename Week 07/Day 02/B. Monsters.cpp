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
        ll n,k,mx=-1;
        cin>>n>>k;
        vector<ll>ar;
        for(ll i=0;i<n;i++){
            ll x;
            cin>>x;
            ar.push_back(x);
            mx = max(ar[i],mx);
        }
        // if(n==1){
        //     cout<<1<<endl;
        //     continue;
        // }
        // bool flag = false;
        // for(int i=0;i<n;i++){
        //     if(ar[i]>k){
        //         flag = true;
        //     }
        // }
        // if(flag==false){
        //     for(int i=1;i<=n;i++){
        //         cout<<i<<' ';
        //     }
        //     cout<<endl;
        //     continue;
        // }
        map<ll,ll>vis;
        for(ll i=0;i<n;i++)
        {
            vis[ar[i]] = 0;
            if(ar[i]<=k){
                continue;
            }
            ll step = (ar[i]-k)/k;
            if(abs(k-ar[i])%k!=0){
                step++;
            }
            ar[i] -= step*k;
            vis[ar[i]] = 0;
        }
        map<ll,vector<ll>>ans;
        for(ll i =0;i<n;i++){
            ans[ar[i]].push_back(i+1);
        }
        sort(ar.rbegin(),ar.rend());
        for(ll i=0;i<n;i++){
            for(ll j = 0;j<ans[ar[i]].size();j++){
                if(vis[ar[i]]!=1)
                     cout<<ans[ar[i]][j]<<' ';
                else{
                    break;
                }
            }
            vis[ar[i]] = 1;
        }
        cout<<endl;
    }
    return 0;
}