#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;      cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int>vec;
        for(int i=0;i<n;i++){
            int v;      cin>>v;
            vec.push_back(v);
        }
        sort(vec.rbegin(),vec.rend());
        int cnt = 0,ans = 0,val;
        for(int i=0;i<n;i++){
            cnt++;
            if(vec[i]>=x){
                ans++;
                cnt = 0;
            }
            else{
                val = cnt*vec[i];
                if(val>=x){
                    ans++;
                    cnt = 0;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}