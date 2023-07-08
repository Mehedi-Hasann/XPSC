#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int lenOfLongSubarr(int A[],  int N, int K) 
{ 
    unordered_map<int,int>mp;
    int i=0,j=0,sum=0,ans=0;
    while(i<N)
    {
        sum+=A[i];
        if(sum==K){
            ans = max(ans,i-j+1);
        }
        if(mp.find(sum-K) != mp.end()){
            ans = max(ans,i-mp[sum-K]);
        }
        if(mp.find(sum)==mp.end())
            mp[sum] = i;
        i++;
       // cout<<sum<<' ';
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int n,k;
    cin>>n>>k;
    int ar[n+5];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    cout<<lenOfLongSubarr(ar,n,k)<<endl;
    return 0;
}