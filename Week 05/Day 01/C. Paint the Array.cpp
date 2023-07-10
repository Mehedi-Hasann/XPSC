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
        ll n;
        cin>>n;
        ll ar[n+2];
        for(int i=0;i<n;i++){
            cin>>ar[i];
        }
        ll gcd_odd = ar[0],gcd_even = ar[1];
        for(int i=0;i<n;i+=2){
            gcd_odd = __gcd(gcd_odd,ar[i]);
        }
        for(int i=1;i<n;i+=2){
            gcd_even = __gcd(gcd_even,ar[i]);
        }
        bool ok1 = true,ok2 = true;
        for(int i=0;i<n;i+=2){
            if(ar[i]%gcd_even==0){
                ok1 = false;
            }
        }
        for(int i=1;i<n;i+=2){
            if(ar[i]%gcd_odd==0){
                ok2 = false;
            }
        }
        if(ok1==false and ok2==false){
            cout<<0LL<<endl;
        }
        else{
            if(ok1!=true)
                cout<<gcd_odd<<endl;
            else{
                cout<<gcd_even<<endl;
            }
        }
    }
    return 0;
}