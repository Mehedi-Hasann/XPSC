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
        int n,k;
        cin>>n>>k;
        int ans = 0;
        ans = (n/k)*k + k/2;
        cout<<min(ans,n)<<endl;
    }
    return 0;
}