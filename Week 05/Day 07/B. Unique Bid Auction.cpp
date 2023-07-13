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
        int n;
        cin>>n;
        map<int,int>mp;
        int ar[n+2];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            mp[ar[i]]++;
        }
        int ans = -1,mn = INT_MAX;
        for(int i=0;i<n;i++){
            if(mp[ar[i]]==1 and mn>ar[i]){
                ans = i+1;
                mn = min(mn,ar[i]);
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}