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
        vector<int>vec;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            vec.push_back(x);
        }
        reverse(vec.begin(),vec.end());
        map<int,int>mp;
        int ans = 0;
        for(int i=0;i<n;i++){
            mp[vec[i]]++;
            if(mp[vec[i]]==2){
                ans = n-(i);
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}