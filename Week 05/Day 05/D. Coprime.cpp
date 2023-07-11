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
        int n,visited[1010]= {0};
        cin>>n;
        int ar[n+5];
        vector<int>vec;
        for(int i=1;i<=n;i++){
            cin>>ar[i];
            visited[ar[i]] ++;
        }
        map<int,int>mp;
        for(int i=1;i<=n;i++){
            mp[ar[i]]++;
            if(visited[ar[i]]==mp[ar[i]]){
                vec.push_back(ar[i]);
            }
        }
        int a,b,len = -1;
        map<int,int>lent;
        for(int i=0;i<=n;i++){
            mp[i] = 0;
        }
        for(int i=1;i<=n;i++){
            lent[ar[i]] = i;
        }
        for(int i=0;i<vec.size();i++){
            for(int j=0;j<vec.size();j++){
                if(__gcd(vec[i],vec[j])==1 and len < ( lent[vec[i]] + lent[vec[j]] ) ){
                    a = vec[i];
                    b = vec[j];
                    len = lent[vec[i]] + lent[vec[j]];
                }
                // if(__gcd(vec[i],vec[j])==1){
                //     cout<<vec[i]<<" "<<vec[j]<<' '<<__gcd(vec[i],vec[j])<<' '<<lent[vec[i]]+lent[vec[j]]<<endl;
                // }
            }
        }
        if(len==-1){
            cout<<-1<<endl;
            continue;
        }
        int ans = 0;
        //cout<<a<<' '<<b<<endl;
        for(int i=n;i>=1;i--){
            if(ar[i]==a){
                ans += i;
                break;
            }
        }
        for(int i=n;i>=1;i--){
            if(ar[i]==b){
                ans += i;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}