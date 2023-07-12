#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+2];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        sort(ar,ar+n);
        int ans = INT_MAX;
        for(int i=1;i<n;i++){
            ans = min(ans,ar[i]-ar[i-1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}