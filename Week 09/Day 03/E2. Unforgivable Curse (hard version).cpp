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
        string s,t,ss,tt;
        cin>>n>>k;
        cin>>s>>t;
        ss = s,tt = t;
        sort(ss.begin(),ss.end());
        sort(tt.begin(),tt.end());
        if(ss != tt){
            cout<<"NO"<<endl;
            continue;
        }
        bool flag = true;
        for(int i=0;i<n;i++){
            if((i+k)>=n and (i-k)<0){
                if(s[i] != t[i]){
                    flag = false;
                    break;
                }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}