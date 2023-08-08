#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool cmp(pair<int,int>x,pair<int,int>y){
    if(x.second<y.second){
        return true;
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int n,k;
    cin>>n>>k;
    int ar[n+5];
    vector<pair<int,int>>ans;
    vector<int>val;
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        ans.push_back({i+1,ar[i]});
    }
    sort(ans.begin(),ans.end(),cmp);
    for(auto it : ans){
        sum += it.second;
        if(sum<=k){
            val.push_back(it.first);
        }
        else{
            break;
        }
    }
    cout<<val.size()<<endl;
    for(auto it : val){
        cout<<it<<' ';
    }
    cout<<endl;
    return 0;
}