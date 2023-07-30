#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        ll n,ans;
        cin>>n;
        ll ar[n+2];
        vector<ll>vec;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        vec.push_back(ar[0]);
        for(int i=0;i<n-1;i++){
            if(ar[i] != ar[i+1]){
                vec.push_back(ar[i+1]);
            }
        }
        ans = vec.size();
        for(int i=1;i<vec.size()-1;i++){
            if(vec[i]>vec[i-1] and vec[i]<vec[i+1]){
                ans--;
            }
            if(vec[i]<vec[i-1] and vec[i]>vec[i+1]){
                ans--;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}