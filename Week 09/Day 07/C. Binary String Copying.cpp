#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;          cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int lf[n+5],rf[n+5];
        lf[0] = -1;
        for(int i=0;i<n;i++){
            if(i>0){
                lf[i] = lf[i-1];
            }
            if(s[i]=='0'){
                lf[i] = i;
            }
        }
        rf[n-1] = n;
        for(int i=n-1;i>=0;i--){
            if(i != (n-1)){
                rf[i] = rf[i+1];
            }
            if(s[i]=='1'){
                rf[i] = i;
            }
        }
        set<pair<int,int>>st;
        while(m--)
        {
            int u,v;
            cin>>u>>v;
            int l = rf[u-1], r = lf[v-1];
            if(l>r){
                st.insert({-1,-1});
            }
            else{
                st.insert({r,l});
            }
        }
        cout<<st.size()<<endl;
    }
    return 0;
}