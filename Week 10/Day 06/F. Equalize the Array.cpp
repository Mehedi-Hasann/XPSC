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
        int n;
        cin>>n;
        int ar[n+2],loop = -1;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            mp[ar[i]]++;
            loop = max(loop,mp[ar[i]]);
        }
        vector<int>mp2;
        for(auto it : mp){
            mp2.push_back(it.second);
        }
        int ans = n;
        // sort(mp2.begin(),mp2.end());
        // int first = mp2[0],last = mp2[mp2.size()-1];
        // if(first==last){
        //     cout<<0<<endl;
        //     continue;
        // }
        int vis[n+5] = {0};
        for(int i = 0;i<mp2.size();i++){
            int cnt = 0;
            if(vis[mp2[i]]==1){
                continue;
            }
            vis[mp2[i]] = 1;
            for(int j=0;j<mp2.size();j++){
                if(mp2[i]<=mp2[j]){
                    cnt += mp2[i];
                }
            }
            ans = min(n-cnt,ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}