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
        int ans = n - 2*(k-1);
        if(ans > 0 and ans%2 ==0 ){
            cout<<"YES"<<endl;
            for(int i=0;i<k-1;i++){
                cout<<2<<' ';
            }
            cout<<ans<<endl;
            continue;
        }
        int val = n - (k-1);
        if(val > 0 and val%2 == 1)
        {
            cout<<"YES"<<endl;
            for(int i=1;i<=k-1;i++){
                cout<<1<<' ';
            }
            cout<<val<<endl;
            continue;
        }
        cout<<"NO"<<endl;
    }
    return 0;
}