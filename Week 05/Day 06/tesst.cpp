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
        ll n,m;
        cin>>n>>m;
        ll ar[m+5], sum = 0;
        bool flag = true;
        ll mx = -1;
        for(int i=0;i<m;i++){
            cin>>ar[i];
            sum += ar[i];
            mx = max(ar[i],mx);
            if(ar[i]>n){
                sum -= ar[i]-n;
            }
        }
        if(mx==-1){
            mx = 0;
        }
        //cout<<mx%n<<endl;
        if(sum%n-mx%n<0){
            cout<<0<<endl;
            continue;
        }
        cout<<sum%n-mx%n<<endl;
    }
    return 0;
}