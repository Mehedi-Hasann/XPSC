#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        int low = 1,high = vec[n-1],mid,ans;
        while(low<=high){
            mid = low + (high-low+1)/2;
            int cnt = 1,prev = vec[0];
            for(int i=1;i<n;i++){
                if( (vec[i]-prev)>=mid ){
                    cnt++;
                    prev = vec[i];
                }
            }
            //cout<<mid<<' '<<cnt<<endl;
            if(cnt>=k){
                ans = mid;
                low = mid + 1;
            }
            else{
                high = mid -1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}