#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    ll n,k,ans = 0,mx = INT_MIN;
    cin>>n>>k;
    vector<ll>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
        mx = max(mx,vec[i]);
    }
    ll low = 0,high = mx;
    while(low<=high){
        ll mid = low + (high-low)/2;
        ll val = 0;
        for(int i=0;i<n;i++){
            if((vec[i]-mid)>0)
                val += (vec[i]-mid);
        }
        //cout<<mid<<' '<<val<<endl;
        if(val>=k){
            low = mid +1;
            ans = mid;
        }
        else if(val<k){
            high = mid - 1;
        }
    }
    cout<<ans<<endl;
    return 0;
}