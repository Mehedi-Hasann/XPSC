#include<bits/stdc++.h>
#define ll long long
const ll mod = 1e9+7;
using namespace std;
ll pow(ll n,ll k)
{
    ll ans = (ll)1;
    for(int i=1;i<=k;i++){
        ans*=n;
        ans = ans%mod;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        cout<<pow(n,k)%mod<<endl;
    }
    return 0;
}