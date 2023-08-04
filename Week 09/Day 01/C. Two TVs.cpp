#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int n,sum=0;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int u,v;
        cin>>u>>v;
        mp[u]++;
        mp[v+1]--;
    }
    bool flag = true;
    for(auto it = mp.begin(); it != mp.end() ;it++){
        sum += it->second;
        if(sum>2){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}