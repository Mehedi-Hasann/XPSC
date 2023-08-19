#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int n,t,cs = 1;
    //cin >> t;
    while(cin>>n>>t)
    {
        if(n==0 and t==0){
            break;
        }
        cout<<"CASE# "<<cs<<":"<<endl;
        cs++;
        vector<int>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        sort(vec.begin(),vec.end());
        while(t--)
        {
            int q, ans = -1,lo = 0 , hi = n-1;
            cin>>q;
            while(lo<=hi){
                int mid = lo + (hi-lo)/2;
                if(vec[mid] == q){
                    ans = mid + 1;
                    hi = mid - 1;
                }
                else if(vec[mid]<q){
                    lo = mid + 1;
                }
                else{
                    hi = mid - 1;
                }
            }
            if(ans==-1){
                cout<<q<<" not found"<<endl;
            }
            else{
                cout<<q<<" found at "<<ans<<endl;
            }
        }
    }
    return 0;
}