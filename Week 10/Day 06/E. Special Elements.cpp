#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;      cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+1];
        vector<int>mp(n+1);
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = 0;
            for(int j = i;j<n;j++){
                sum += ar[j];
                if(i==j){
                    continue;
                }
                if(sum<=n){
                    mp[sum] = 1;
                }
            }
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            if(mp[ar[i]]==1){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}