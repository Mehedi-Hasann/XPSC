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
        int ar[3] = {0},ans = 0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ar[x%3] = ar[x%3] + 1;
        }
        //cout<<ar[0]<<' '<<ar[1]<<' '<<ar[2]<<endl;
        ans += min(ar[1],ar[2]);
        ar[1] -= ans;
        ar[2] -= ans;
        ans += ar[0];
        ans += (ar[1]+ar[2])/3;
        cout<<ans<<endl;
    }
    return 0;
}