#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;          cin>>t;
    while(t--)
    {
        int n,k,mx=INT_MIN;
        cin>>n>>k;
        int ar[n+2];
        map<int,int>color;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            mx = max(mx,ar[i]);
        }
        vector<int>vec[mx+5];
        for(int i=0;i<n;i++){
            vec[ar[i]].push_back(i);
        }
        vector<int>v;
        for(auto it : vec){
            if(it.size()>=k){
                int cnt = 1;
                for(auto i=it.begin(); i != it.end();i++){
                    if(cnt<=k){
                        color[*i] = cnt;
                        cnt++;
                    }
                    else{
                        color[*i] = 0;
                    }
                }
            }
            else{
                for(auto i = it.begin();i!=it.end();i++){
                    v.push_back(*i);
                }
            }
        }
        int val = 1;
        for(int i=0;i<v.size()-(v.size())%k;i++){
            color[v[i]] = val;
            val++;
            if(val>k){
                val = 1;
            }
        }
        for(int i=0;i<n;i++){
            cout<<color[i]<<' ';
        }
        cout<<endl;
    }
    return 0;
}