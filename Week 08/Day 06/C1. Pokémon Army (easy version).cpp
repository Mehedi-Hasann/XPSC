#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;          cin>>t;
    while(t--)
    {
        int n,q;
        ll ans = 0;
        cin>>n>>q;
        int ar[n+5];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        int cur = ar[0],flag = 1;
        for(int i=1;i<n;i++){
            if(flag==1){
                if(ar[i]>ar[i-1]){
                    cur = ar[i];
                }
                else{
                    //cout<<cur<<" ";
                    ans += cur;
                    cur = ar[i];
                    flag = 0;
                }
            }
            else{
                if(ar[i]<ar[i-1]){
                    cur = ar[i];
                }
                else{
                    //cout<<cur<<' ';
                    ans -= cur;
                    cur = ar[i];
                    flag = 1;
                }
            }
        }
        if(flag==1){
            ans += cur;
        }
        cout<<ans<<endl;
    }
    return 0;
}