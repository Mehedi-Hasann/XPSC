#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    ll n,k,mx = INT_MIN;
    cin>>n>>k;
    ll ar[n+2];
    deque<ll>dq;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        dq.push_back(ar[i]);
        mx = max(ar[i],mx);
    }
    if(k>=(n-1)){
        cout<<mx<<endl;
        return 0;
    }
    map<ll,ll>mp;
    ll ans = 0;
    while(true){
        ll ff = dq.front();
        dq.pop_front();
        ll sc = dq.front();
        dq.pop_front();
        if(ff>sc){
            mp[ff]++;
            dq.push_back(sc);
            dq.push_front(ff);
        }
        else{
            mp[sc]++;
            dq.push_back(ff);
            dq.push_front(sc);
        }
        if(mp[ff]==k){
            ans = ff;
            break;
        }
        if(mp[sc]==k){
            ans = sc;
            break;
        }
    }
    cout<<ans<<endl;
    return 0;
}