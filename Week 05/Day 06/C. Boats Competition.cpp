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
        vector<int>sum;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                sum.push_back(ar[i]+ar[j]);
            }
        }
        map<int,int>ans;
        int mx = 0;
        int visited[500] = {0};
        for(int i=0;i<sum.size();i++)
        {
           if(visited[sum[i]]==1){
                continue;
           }
           visited[sum[i]] = 1;
           int cnt = 0,repeat[500]={0};
           //cout<<"sum "<<sum[i]<<endl;
            for(int j=0;j<n-1;j++)
            {
                //cout<<"for j "<<j<<endl;
                for(int k=j+1;k<n;k++)
                {
                    if(ar[j]+ar[k]==sum[i] and repeat[j] !=1 and repeat[k]!=1){
                        //cout<<ar[j]<<' '<<ar[k]<<endl;
                        repeat[j] = 1;
                        repeat[k] = 1;
                        k = n;
                        cnt++;
                    }
                }
            }
            //cout<<endl<<endl;
            mx = max(mx,cnt);
        }
        cout<<mx<<endl;
    }
    return 0;
}