#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5+5;
int visited[N],color[N];
vector<int>adj_list[N];
void dfs(int node)
{
    visited[node] = 1;
    for(auto adj_node : adj_list[node]){
        if(visited[adj_node]==0){
            if(color[node]==1){
                color[adj_node] = 2;
            }
            else{
                color[adj_node] = 1;
            }
            dfs(adj_node);
        }
    }
    return;
}
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    ll n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        ll u,v;        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    color[1] = 1;
    dfs(1);
    ll cnt = 0;
    for(int i=1;i<=n;i++){
        if(color[i]==1){
            cnt++;
        }
    }
    ll rem = n - cnt;
    cout<<cnt*rem-(n-1)<<endl;
    return 0;
}