#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int ans,a,c,b;
    cin>>a>>b>>c;
    ans = max(a*b*c,max(a+b*c,a*b+c));
    ans = max(ans,a+b+c);
    ans = max(ans,max((a+b)*c,a*(b+c)));
    cout<<ans<<endl;
    return 0;
}