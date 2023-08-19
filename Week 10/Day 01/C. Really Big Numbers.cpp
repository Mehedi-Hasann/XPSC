#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    ll n,s,res = 0;
    cin>>n>>s;
    ll low = 10, high = 1e18;
    while(low<=high)
    {
        ll mid = low + (high-low)/2;
        ll val = mid,sum = 0;
        while(val != 0){
            sum += val%10;
            val /= 10;
        }
        ll ans = mid - sum;
        if(ans>=s){
            res = mid;
            high = mid -1;
        }
        else if(ans<s){
            low = mid + 1;
        }
    }
    //cout<<res<<endl;
    if((n-res)>=0 and res != 0){
        cout<<n-res+1<<endl;
    }else{
        cout<<0<<endl;
    }
    return 0;
}