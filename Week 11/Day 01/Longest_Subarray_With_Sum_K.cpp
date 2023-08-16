#include<bits/stdc++.h>
#define ll long long
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int i=0,j=0,ans=0;
    long long sum=0;
    while(j<a.size())
    {
        sum += a[j];
        if(sum>k){
            while(sum>k){
                sum-=a[i];
                i++;
            }
        }
        if(sum==k){
            ans = max(ans,j-i+1);
        }
        j++;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    long long n,k;
    cin>>n>>k;
    vector<int>vec;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
    }
    cout<<longestSubarrayWithSumK(vec,k)<<endl;
    return 0;
}