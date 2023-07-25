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
        ll n,ans = 0;
        cin>>n;
        ll ar[n+2];
        for(ll i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        ll freq[35]={0};
        for(ll i=0;i<n;i++)
        {
            ll msb = 0;
            for(ll j=30;j>=0;j--)
            {
                if( (ar[i]&(1<<j)) !=0 ){
                    msb = j;
                    break;
                }
            }
            freq[msb]++;
        }
        for(ll i=0;i<=30;i++){
            ans += (ll)(freq[i]*(freq[i]-1))/2;
        }
        cout<<ans<<endl;
    }
    return 0;
}