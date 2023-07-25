#include<bits/stdc++.h>
#define ll long long
using namespace std;
int count(int n)
{
    int ans = 0;
    for(int i=21;i>=0;i--)
    {
        if( (n>>i)&1==1 )
            ans++;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int n,m,k;
    cin>>n>>m>>k;
    int ar[m+5];
    for(int i=0;i<=m;i++)
    {
        cin>>ar[i];
    }
    int ans = 0;
    for(int i=0;i<m;i++)
    {
        if(count(ar[i]^ar[m])<=k){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}