#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        mp[u]++;
        mp[v+1]--;
    }
    int ans = 0,sum=0;
    for(auto it = mp.begin(); it != mp.end(); it++){
        sum += it->second;
        ans = max(ans,sum);
    }
    cout<<ans<<endl;
    return 0;
}