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
        ll n,ans = -1,cnt=0;
        cin>>n;
        for(ll i = 1;i<1e4;i++)
        {
            if(n%i==0 and n%(i+1)==0){
                cnt++;
            }
            else{
                ans = max(ans,cnt);
                cnt = 0;
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}