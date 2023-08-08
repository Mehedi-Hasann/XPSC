#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    ll n,t,sum=0,cur=0;
    cin>>n>>t;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        ll x;      cin>>x;
        mp[i] = x;
        sum += x;
    }
    while(t--){
        ll type;
        cin>>type;
        if(type==1){
            ll idx,val;
            cin>>idx>>val;
            if(mp[idx-1]==0){
                mp[idx-1] = val;
                sum -= cur;
                sum += val;
            }
            else{
                sum -= mp[idx-1];
                mp[idx-1] = val;
                sum +=  val;
            }
        }
        else{
            ll val;
            cin>>val;
            cur = val;
            mp.clear();
            sum = val*n;
        }
        cout<<sum<<endl;
    }
    return 0;
}