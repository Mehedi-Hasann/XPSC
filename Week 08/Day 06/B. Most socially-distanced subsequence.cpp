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
        int ar[n+5];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        vector<int>ans;
        ans.push_back(ar[0]);
        for(int i=1;i<n-1;i++){
            if(ar[i]==1 or ar[i]==n){
                ans.push_back(ar[i]);
            }
            else if( (ar[i]>ar[i-1] and ar[i]>ar[i+1]) or (ar[i]<ar[i-1] and ar[i]<ar[i+1]) ){
                ans.push_back(ar[i]);
            }
        }
        ans.push_back(ar[n-1]);
        cout<<ans.size()<<endl;
        for(auto it : ans){
            cout<<it<<' ';
        }
        cout<<endl;
    }
    return 0;
}