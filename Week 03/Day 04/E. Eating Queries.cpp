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
        ll n,k,s=0;
        cin>>n>>k;
        vector<ll>vec,sum;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            vec.push_back(x);
        }
        sort(vec.rbegin(),vec.rend());
        for(int i=0;i<n;i++){
            s+=vec[i];
            sum.push_back(s);
        }
        while(k--)
        {
            ll x;
            bool flag = false;
            cin>>x;
            ll ans = -1;
            ll low=0,high=n-1;
            if(sum[n-1]<x)
            {
                cout<<-1<<endl;
                continue;
            }
            ans = n;
            while(low<high)
            {
                ll mid = low + (high-low)/2;
                if(sum[mid]>=x){
                    ans = mid+1;
                    high = mid;
                }
                else if(sum[mid]<x){
                    low = mid+1;
                }
                // cout<<high<<" high ";
                // cout<<low<<" low"<<endl;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}