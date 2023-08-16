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
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll pre[n+2];
        ll ans = 0;
        vector<ll>vec;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='L'){
                pre[i] = i;
                //cout<<pre[i]<<' ';
            }
            else{
                pre[i] = n - i-1;
                //cout<<pre[i]<<' ';
            }
            ans += pre[i];
            if(i<=n/2-1){
                if(s[i] != 'R'){
                    vec.push_back(abs(pre[i]-(n-i-1)));
                }
                //cout<<s[i]<<i<<" "<<abs(pre[i]-(n-i-1))<<endl;
            }
            else{
                if(s[i] != 'L'){
                    vec.push_back(abs(i-pre[i]));
                    //cout<<s[i]<<i<<" "<<i-pre[i]<<endl;
                }
            }
        }
        sort(vec.rbegin(),vec.rend());
        for(int k=0;k<n;k++)
        {
            if(k<vec.size())
                ans += vec[k];
            cout<<ans<<' ';         
        }
        cout<<endl;
    }
    return 0;
}