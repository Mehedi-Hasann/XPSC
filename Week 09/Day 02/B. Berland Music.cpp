#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;          cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>vec,ans(n);
        vector<pair<int,int>>ans1,ans2;
        int cnt = n;
        string s;
        for(int i=0;i<n;i++){
            int x;      cin>>x;
            vec.push_back(x);
        }
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='1')
                ans1.push_back({vec[i],i+1});
            else
                ans2.push_back({vec[i],i+1});
        }
        sort(ans1.rbegin(),ans1.rend());
        sort(ans2.rbegin(),ans2.rend());
        for(int i=0;i<ans1.size();i++){
            ans[ans1[i].second-1] = cnt;
            cnt--;
        }
        for(int i=0;i<ans2.size();i++){
            ans[ans2[i].second-1] = cnt;
            cnt--;
        }
        for(auto it : ans){
            cout<<it<<' ';
        }
        cout<<endl;
    }
    return 0;
}