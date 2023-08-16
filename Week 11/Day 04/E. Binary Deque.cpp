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
        int n,k,sum=0;
        cin>>n>>k;
        vector<int>vec;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            vec.push_back(x);
            sum+=x;
        }
        if(sum==k){
            cout<<0<<endl;
            continue;
        }
        if(sum<k){
            cout<<-1<<endl;
            continue;
        }
        int cnt=0,j=0,ans=0;
        for(int i=0;i<n;i++)
        {
            cnt += vec[i];
            if(cnt==k){
                ans = max(ans,i-j+1);
            }
            else if(cnt>k){
                while(cnt>k){
                    if(vec[j]==1)
                        cnt--;
                    j++;
                }
            }
        }
        cout<<n-ans<<endl;
    }
    return 0;
}