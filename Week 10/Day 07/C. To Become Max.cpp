#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while(t--)
    {
        ll n,k, mx = INT_MIN,ans = 0;
        cin>>n>>k;
        vector<ll>ar(n+2);
        for(int i=1;i<=n;i++){
            cin>>ar[i];
            if(ar[i]>mx){
                mx = ar[i];
            }
        }
        ans = mx;
        for(int i = n;i>=2;i--){
            ll br[n+2],nk = k;
            for(int l=1;l<=n;l++){
                br[l] = ar[l];
            }
            ll val = ar[i] + 1;
            for(int j = i-1;j>=1;j--){
                if(nk==0){
                    break;
                }
                if( (val-br[j])<=nk and (val-br[j])>=0 and br[j]<=br[j+1]){
                    nk = nk - (val-br[j]);
                    br[j] = val;
                    val += 1;
                }
                else if( (val-br[j])>nk and (val-br[j])>=0 ){
                    br[j] += nk;
                    nk = 0;
                    break;
                }
            }
            for(int l=1;l<=n;l++){
                cout<<br[l]<<' ';
                ans = max(ans,br[l]);
            }
            cout<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}