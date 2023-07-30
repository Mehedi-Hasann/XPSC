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
        ll sum = 0, n;
        cin>>n;
        ll ar[n+5];
        bool vis[n+5] = {false};
        sum = n*(n+1);
        sum/=2;
        for(ll i=1;i<=n-1;i++){
            cin>>ar[i];
        }
        if(sum<ar[n-1]){
            cout<<"NO"<<endl;
            continue;
        }
        if(sum>ar[n-1])
        {
            if((sum-ar[n-1])<=n and (sum-ar[n-1])>=0)
                vis[sum-ar[n-1]] = true;
            for(ll i=2;i<=n-1;i++)
            {
                if((ar[i]-ar[i-1])<=n and (ar[i]-ar[i-1])>=0)
                    vis[ar[i]-ar[i-1]] = true;
            }
            bool flag = true;
            for(ll i=1;i<=n;i++)
            {
                if(vis[i]==false)
                {
                    if(vis[i] != ar[1])
                    {
                        vis[i] = true;
                        break;
                    }
                }
            }
            for(ll i=1;i<=n;i++)
            {
                if(vis[i]==false)
                {
                    flag = false;
                }
            }
            if(flag){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            continue;
        }
        if(sum==ar[n-1])
        {
            ll ans=0,cnt=0;
            if(ar[1]<=n)
                vis[ar[1]] = true;
            for(ll i=2;i<=n-1;i++){
                if((ar[i]-ar[i-1])<=n and (ar[i]-ar[i-1])>=0)
                    vis[ar[i]-ar[i-1]] = true;
            }
            bool flag= false;
            for(ll i=1;i<=n;i++)
            {
                if(vis[i]==false){
                    ans += i;
                    cnt++;
                }
            }
            if(ans==ar[1]){
                flag = true;
            }
            for(int i=2;i<=n-1;i++){
                if(ans == (ar[i]-ar[i-1])){
                    flag= true;
                    break;
                }
            }
            if(cnt>2){
                flag= false;
            }
            if(flag){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}