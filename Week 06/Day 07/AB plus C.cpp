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
        if(n==1){
            cout<<-1<<endl;
        }
        else if(n<=1000000)
            cout<<n-1<<' '<<1<<' '<<1<<endl;
        else{
            if(n%1000000 != 0)
                cout<<1000000<<' '<<n/1000000<<' '<<n%1000000<<endl;
            else{
                cout<<1000000<<' '<<n/1000000-1<<' '<<1000000<<endl;
            }
        }
    }
    return 0;
}