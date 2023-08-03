#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;          cin>>t;
    while(t--)
    {
        int n,w;
        cin>>n>>w;
        multiset<int>ms;
        for(int i=0;i<n;i++){
            int x;      cin>>x;
            ms.insert(x);
        }
        int height = 1,rem_w = w;
        // for(auto it = ms.begin();it != ms.end();it++){
        //     cout<<*it<<' ';
        // }
        // cout<<endl;
        while(!ms.empty())
        {
            auto it = ms.upper_bound(rem_w);
            if(it==ms.begin()){
                rem_w = w;
                height++;
            }
            else{
                it--;
                rem_w -= *it;
                //cout<<*it<<' ';
                ms.erase(it);
            }
        }
        cout<<height<<endl;
    }
    return 0;
}