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
        string s;
        cin>>n>>s;
        map<char,int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int cnt = 0,val = INT_MAX;
        for(char ch = 'a';ch<='z';ch++)
        {
            if((mp[ch]&1)){
                cnt++;
                val = min(val,mp[ch]);
            }
        }
        if((n&1)==0)
        {
            if(cnt){
                cout<<0<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
        else
        {
            if( cnt==1 and val==1)
            {
                cout<<1<<endl;
            }
            else if(cnt==1 and val>1){
                cout<<2<<endl;
            }
            else{
                cout<<0<<endl;
            }
        }
    }
    return 0;
}