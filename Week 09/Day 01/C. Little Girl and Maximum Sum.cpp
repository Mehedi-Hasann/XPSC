#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    ll n,t;
    cin>>n>>t;
    ll ar[n+2];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    map<ll,ll>mp;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        mp[a]++;
        mp[b+1]--;
    }
    for(int i=1;i<=n;i++){
        mp[i] += mp[i-1];
    }
    multiset<ll, greater<int>>s;
    for(auto it : mp){
        if(it.second > 0){
            s.insert(it.second);
        }
    }
    ll sum = 0;
    // for(auto it = s.begin(); it != s.end(); it++){
    //     cout<<*it<<' ';
    // }
    // cout<<endl;
    for(int i=0;i<n;i++)
    {
        if(s.empty()){
            break;
        }
        auto it = s.begin();
        auto m = *it;
        s.erase(it);
        sum += m*ar[n-1-i];
    }
    cout<<sum<<endl;
    return 0;
}