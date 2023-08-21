#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while(t--)
    {
        int n,mn = INT_MAX,j;
        cin>>n;
        vector<int>a(n),d(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>d[i];
        }
        for(int i=0;i<n;i++){
            int it = lower_bound(d.begin(),d.end(),a[i]) - d.begin();
            cout<<d[it]-a[i]<<' ';
        }
        cout<<endl;
        int id = n-1;
        vector<int>ans;
        for(int i=n-1;i>=0;i--){
            //cout<<d[id]<<' '<<a[i]<<' ';
            ans.push_back(d[id]-a[i]);
            if(a[i]>d[i-1]){
                id = i-1;
            }
        }
        reverse(ans.begin(),ans.end());
        for(auto it : ans){
            cout<<it<<' ';
        }
        cout<<endl;
    }
    return 0;
}