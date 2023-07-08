#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t,ans=1;
    cin>>t;
    while(t--)
    {
        ll n;
        ll ans=0;
        cin>>n;
        map<ll,ll>mp;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            mp[x]++;
        }
        for(auto it : mp){
            if(it.second>1)
                ans += it.second-1;
        }
        if(ans%2)
            ans++;
        cout<<n-ans<<endl;
    }
    return 0;
}