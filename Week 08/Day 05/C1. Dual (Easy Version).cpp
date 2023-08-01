#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t = 1;
    cin>>t;
    while(t--)
    {
        int n,mx = -20,id;
        cin>>n;
        vector<pair<int,int>>vp;
        int ar[n+5];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]>mx){
                mx = ar[i];
                id = i;
            }
        }
        if(mx<=0)
        {
            for(int i=n-2;i>=0;i--)
            {
                if(ar[i]>ar[i+1]){
                    ar[i] += ar[i+1];
                    vp.push_back({i+1,i+2});
                }
            }
        }
        else
        {
            int step = 5;
            while(step--){
                ar[id] += ar[id];
                vp.push_back({id+1,id+1});
            }
            for(int i=1;i<n;i++){
                if(ar[i-1]>ar[i]){
                    while(ar[i-1]>ar[i]){
                        ar[i] += ar[id];
                        vp.push_back({i+1,id+1});
                    }
                    id = i;
                }
            }
        }
        cout<<vp.size()<<endl;
        for(int i=0;i<vp.size();i++){
            cout<<vp[i].first<<' '<<vp[i].second<<endl;
        }
    }
    return 0;
}