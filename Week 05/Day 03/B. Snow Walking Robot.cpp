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
        int n = s.size();
        int u=0,d=0,r=0,l=0;
        for(int i=0;i<n;i++){
            if(s[i]=='U')
                u++;
            else if(s[i]=='D')
                d++;
            else if(s[i]=='R')
                r++;
            else
                l++;
        }
        map<char,int>mp;
        int row = min(l,r), col = min(u,d);
        string ans="";
        for(int i=0;i<n;i++){
            if(s[i]=='L' or s[i]=='R'){
                mp[s[i]]++;
                if(mp[s[i]]<=row){
                    ans.push_back(s[i]);
                }
            }
            else{
                mp[s[i]]++;
                if(mp[s[i]]<=col){
                    ans.push_back(s[i]);
                }
            }
        }
        sort(ans.begin(),ans.end());
        if(row==0 and col!=0){
            cout<<2<<endl;
            cout<<"UD"<<endl;
            continue;
        }
        if(row!=0 and col==0){
            cout<<2<<endl;
            cout<<"LR"<<endl;
            continue;
        }
        if(ans[0]==ans[ans.size()-1]){
            cout<<0<<endl;
            cout<<endl;
            continue;
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++){
            if(ans[i]=='L'){
                cout<<'L';
            }
        }for(int i=0;i<ans.size();i++){
            if(ans[i]=='U'){
                cout<<'U';
            }
        }for(int i=0;i<ans.size();i++){
            if(ans[i]=='R'){
                cout<<'R';
            }
        }for(int i=0;i<ans.size();i++){
            if(ans[i]=='D'){
                cout<<'D';
            }
        }
        cout<<endl;
    }
    return 0;
}