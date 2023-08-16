#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int ans = 0;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>a)
            ans++;
        if(c>a)
            ans++;
        if(d>a)
            ans++;
        cout<<ans<<endl;
    }
    return 0;
}