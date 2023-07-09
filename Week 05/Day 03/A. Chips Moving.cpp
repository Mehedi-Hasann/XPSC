#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int n,count;
    cin>>n;
    vector<int>vec;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    int ans = INT_MAX;
    for(int i=0;i<n;i++){
        count = 0;
        for(int j=0;j<n;j++){
            if(abs(vec[i]-vec[j])%2!=0){
                count++;
            }
        }
        ans = min(count,ans);
    }
    cout<<ans<<endl;
    return 0;
}