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
        int n,q;
        cin>>n>>q;
        map<int,pair<int,int>>mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(!mp.count(x)){
                mp[x].first = i;
                mp[x].second = i;
            }
            else
                mp[x].second = i;
        }
        for(int i=0;i<q;i++){
            int u,v;
            cin>>u>>v;
            if(mp.count(u) and mp.count(v) and mp[u].first<mp[v].second)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}