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
        int ar[n+2],br[n+2];
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            mp[ar[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[ar[i]]==1){
                cout<<i+1<<endl;
                i = n;
            }
        }
    }
    return 0;
}