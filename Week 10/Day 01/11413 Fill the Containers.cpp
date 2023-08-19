#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int n,k;
    while (cin>>n>>k)
    {
            int mx = INT_MIN;
            vector<int>vec(n);
            for(int i=0;i<n;i++){
                cin>>vec[i];
                mx = max(mx,vec[i]);
            }
            int low = mx, high = INT_MAX, ans;
            while(low<=high)
            {
                int cap = low + (high-low)/2;
                int cnt = 1, sum = 0;
                for(int i=0;i<n;i++){
                    if( (sum+vec[i]) <=cap ){
                        sum += vec[i];
                    }
                    else{
                        cnt++;
                        sum = vec[i];
                    }
                }
                if(cnt<=k){
                    ans = cap;
                    high = cap-1;
                }
                else{
                    low = cap+1;
                }
            }
            cout<<ans<<endl;
    }
    return 0;
}