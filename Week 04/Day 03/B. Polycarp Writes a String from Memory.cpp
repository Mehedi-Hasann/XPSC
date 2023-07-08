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
        string s;
        cin>>s;
        map<char,int>mp;
        int cnt=0,ans=0;
        bool flag = true;
        for(int i=0;i<s.size();i++){
            mp[s[i]] = 1;
            if(mp.size()>3){
                mp.clear();
                mp[s[i]] = 1;
                flag = true;
            }
            if(mp.size()==3 and flag){
                ans++;
                flag = false;
            }
        }
        if(mp.size())
            cout<<ans+1<<endl;
        else
            cout<<ans<<endl;
    }
    return 0;
}