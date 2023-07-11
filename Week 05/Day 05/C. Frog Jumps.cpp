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
        vector<int>pos;
        int ans = -1;
        pos.push_back(0);
        for(int i=0;i<s.size();i++){
            if(s[i]=='R')
                pos.push_back(i+1);
        }
        pos.push_back(s.size()+1);
        for(int i=0;i<pos.size()-1;i++){
            ans = max(ans,pos[i+1]-pos[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}