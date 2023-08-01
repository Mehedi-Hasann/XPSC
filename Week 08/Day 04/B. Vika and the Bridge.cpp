#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;           cin>>t;
    while(t--)
    {
        int n,k;        cin>>n>>k;
        vector<int>vec[k+2];
        int ar[n+2];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(vec[ar[i]].empty()){
                vec[ar[i]].push_back(0);
            }
            vec[ar[i]].push_back(i);
        }
        // for(int i=1;i<=k;i++){
        //     for(int j=0;j<vec[i].size();j++){
        //         cout<<vec[i][j]<<' ';
        //     }
        //     cout<<endl;
        // }
        int ans = INT_MAX;
        for(int i=1;i<=k;i++)
        {
            vector<int>gap;
            if(vec[i].empty()){
                continue;
            }
            for(int j=0;j<vec[i].size()-1;j++){
                if(j==0){
                    gap.push_back(vec[i][j+1]);
                    continue;
                }
                gap.push_back(vec[i][j+1]-vec[i][j]-1);
            }
            //cout<<"For i = "<<i<<":"<<endl;
            gap.push_back(n-vec[i][vec[i].size()-1]-1);
            // for(int i=0;i<gap.size();i++){
            //     cout<<gap[i]<<' ';
            // }
            // cout<<endl;
            sort(gap.begin(),gap.end());
            int last = gap[gap.size()-1];
            int se_last = gap[gap.size()-2];
            ans = min(ans,max(se_last,last/2));
        }
        cout<<ans<<endl;
    }
    return 0;
}