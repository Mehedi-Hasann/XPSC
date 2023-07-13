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
        int ar[n+5], mx = -1;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            mx = max(mx,ar[i]);
        }
        int ans = -1;
        for(int i=0;i<n;i++){
            if(i==0){
                if(ar[i]==mx and ar[i+1]<mx){
                    ans = i+1;
                    i = n;
                }
            }
            else if(i==n-1){
                if(ar[i]==mx and ar[i-1]<mx){
                    ans = i+1;
                    i = n;
                }
            }
            else if(ar[i]==mx and (ar[i-1]<mx or ar[i+1]<mx)){
                ans = i+1;
                i = n;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}