#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int n;
    cin>>n;
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int sz = unique(s.begin(),s.end())-s.begin();
    int ans = 0;
    map<int,int>freq;
    for(int i=0;i<n;i++){
        freq[s[i]]++;
    }
    for(auto it : freq){
        ans += (it.second)-1;
    }
    if((ans+sz)>26){
        cout<<-1<<endl;
    }
    else
        cout<<ans<<endl;
    return 0;
}