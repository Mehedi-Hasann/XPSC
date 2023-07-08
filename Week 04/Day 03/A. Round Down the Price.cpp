#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;
    cin>>t;
    ll ar[25];
    for(ll i=0;i<=10;i++){
        ar[i] = pow(10,i);
    }
    while(t--){
        ll ans=1e9,n;
        cin>>n;
        for(ll i=0;i<=10;i++){
            if(ar[i]>n)
                break;
            ans = min(ans,abs(ar[i]-n));
        }
        cout<<ans<<endl;
    }
    return 0;
}