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
        int m;
        cin>>m;
        vector<int>vec[m+2],ans;
        map<int,int>mp;
        for(int i=0;i<m;i++)
        {
            int n;
            cin>>n;
            for(int j=0;j<n;j++){
                int x;
                cin>>x;
                vec[i].push_back(x);
                mp[x]++;
            }
        }
        int val;
        // for(auto it : mp){
        //     cout<<it.first<<' '<<it.second<<endl;
        // }
        for(int i=0;i<m;i++)
        {
            val = -1;
            for(int j=0;j<vec[i].size();j++)
            {
                if(mp[vec[i][j]]==1){
                    val = vec[i][j];
                }
                else{
                    mp[vec[i][j]]--;
                }
            }
            ans.push_back(val);
            if(val==-1)
                break;
        }
        if(val==-1){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<ans.size();i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}