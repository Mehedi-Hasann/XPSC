#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 1e6;
vector<int>vec(N);
int ans=0;
void solve(int l1,int r1,int l2,int r2)
{
    int mx = INT_MIN, mn = INT_MAX;
    for(int i=l1;i<=r1;i++){
        mx = max(mx,vec[i]);
    }
    for(int i=l2;i<=r2;i++){
        mn = min(mn,vec[i]);
    }
    if(mx>mn){
        ans++;
        for(int i=l1,j=l2;i<=r1;i++,j++){
            swap(vec[i],vec[j]);
        }
    }
    if(l1==r1 or l2==r2)
        return;
    solve(l1,(l1+r1)/2,(l1+r1)/2+1,r1);
    solve(l2,(l2+r2)/2,(l2+r2)/2+1,r2);
}
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;          cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>vec[i];
        }
        if(is_sorted(vec.begin()+1,vec.end()+n+1)){
            cout<<0<<endl;
            continue;
        }
        solve(1,n/2,(n/2)+1,n);
        if(is_sorted(vec.begin()+1,vec.begin()+n+1)){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        vec.clear();
        ans=0;
    }
    return 0;
}