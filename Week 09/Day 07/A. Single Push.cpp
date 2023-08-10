#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;          cin>>t;
    while(t--)
    {
        int n;
        bool flag = true;
        cin>>n;
        int ar[n+5],br[n+5];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        for(int i=0;i<n;i++){
            cin>>br[i];
        }
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            if(ar[i]<br[i]){
                v.push_back({i,br[i]-ar[i]});
            }
        }
        for(int i=0;i<(int)v.size()-1;i++){
            if((v[i].first != (v[i+1].first-1)) or (v[i].second != v[i+1].second)){
                flag = false;
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(ar[i]>br[i]){
                flag = false;
                break;
            }
        }
        if(v.size()==1){
            if(v[0].second<0){
                flag = false;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}