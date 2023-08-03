#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;          cin>>t;
    while(t--)
    {
        ll n,w;
        cin>>n>>w;
        ll sum = 0,flag = 0;
        vector<ll>ans;
        for(int i=0;i<n;i++){
            ll x;      cin>>x;
            if(x>=(w+1)/2 and x<=w){
                flag = i+1;
            }
            if(x<=w and sum<(w+1)/2){
                sum += x;
                ans.push_back(i+1);
            }
        }
        if(flag){
            cout<<1<<endl;
            cout<<flag<<endl;
            continue;
        }
        if(ans.empty() or sum<(w+1)/2){
            cout<<-1<<endl;
        }
        else{
            cout<<ans.size()<<endl;
            for(int i=0;i<(int)ans.size();i++){
                cout<<ans[i]<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}