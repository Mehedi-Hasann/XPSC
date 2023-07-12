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
        ll n,k;
        cin>>n>>k;
        int ar[n+2];
        vector<ll>pre;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(i==0){
                pre.push_back(ar[i]);
            }
            else{
                pre.push_back(pre.back() + ar[i]);
            }
        }
        for(int i=1;i<n;i++){
            ar[i] = max(ar[i],ar[i-1]);
        }
        for(int i=0;i<k;i++){
            ll x;
            cin>>x;
            auto idx = upper_bound(ar,ar+n,x)-ar;
            if(idx-1<0){
                cout<<0<<' ';
            }
            else
                cout<<pre[idx-1]<<' ';
            //cout<<idx<<' ';
        }
        cout<<endl;
    }
    return 0;
}