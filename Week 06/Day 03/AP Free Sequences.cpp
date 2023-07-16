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
        int ar[n+2];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        bool flag = true;
        for(int i=1;i<n-1;i++)
        {
            int ans1,ans2;
            map<int,int>mp;
            for(int j=i+1;j<n;j++)
            {
                ans1 = ar[j]-ar[i];
                mp[ans1] = ans1;
            }
            for(int k=0;k<i;k++){
                ans2 = ar[i] - ar[k];
                if(mp.find(ans2)!=mp.end()){
                    flag = false;
                    break;
                }
            }
        }
        if(!flag){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}