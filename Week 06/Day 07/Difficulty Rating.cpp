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
        int x,y,ans = INT_MAX;
        cin>>x>>y;
        for(int i=0;i<=1;i++){
            ans = min(ans,i*x+(3-i)*y);
        }
        ans = min(ans,5*x);
        cout<<ans<<endl;
    }
    return 0;
}