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
        string s;
        cin>>s;
        int ans = -1;
        int n = s.size();
        if((s[n-1]-'0')%2==0){
            cout<<0<<endl;
            continue;
        }
        if((s[0]-'0')%2==0){
            cout<<1<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            if((s[i]-'0')%2==0){
                ans = 2;
                i = n;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}