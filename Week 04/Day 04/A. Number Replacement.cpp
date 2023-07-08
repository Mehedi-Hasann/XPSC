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
        int ar[n+2];
        map<int,char>mp;
       // map<char,int>mp1;
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            mp[ar[i]]=s[i];
        }
        bool flag = true;
        for(int i=0;i<n;i++){
            if(s[i] != mp[ar[i]]){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}