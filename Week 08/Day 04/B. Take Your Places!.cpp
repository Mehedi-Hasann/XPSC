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
        int n,odd=0,even=0;
        cin>>n;
        int ar[n+5];
        vector<int>od,ev;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i] & 1){
                odd++;
                od.push_back(i);
            }
            else{
                even++;
                ev.push_back(i);
            }
        }
        if(abs(odd-even)>1){
            cout<<-1<<endl;
            continue;
        }
        // for(auto it:ev){
        //     cout<<it<<' ';
        // }
        // cout<<endl;
        // for(auto it:od){
        //     cout<<it<<' ';
        // }
        // cout<<endl;
        int ans1 = 0,ans2 = 0,e=0,o=0;
        for(int i=0;i<n;i++){
            if(i&1){
                ans1 += abs(od[o]-i);
                o++;
                ans2 += abs(ev[e]-i);
                e++;
            }
        }
        //continue;
        //cout<<ans1<<' '<<ans2<<endl;
        if(odd==even){
            cout<<min(ans1,ans2)<<endl;
        }
        else if(even>odd){
            cout<<ans1<<endl;
        }
        else{
            cout<<ans2<<endl;
        }
    }
    return 0;
}