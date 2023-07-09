#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int>vec;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            vec.push_back(x);
        }
        reverse(vec.begin(),vec.end());
        int min_val = vec[0], ans = 0;
        for(int i=1;i<n;i++){
            if(vec[i]>min_val){
                ans++;
            }
            min_val = min(min_val,vec[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}