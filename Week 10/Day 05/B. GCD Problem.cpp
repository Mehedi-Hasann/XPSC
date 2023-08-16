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
        int n;
        cin>>n;
        if(n%2==0){
            cout<<n-3<<' '<<2<<' '<<1<<endl;
        }
        else{
            if(((n-1)/2)%2==0){
                cout<<(n-1)/2-1<<' '<<(n-1)/2+1<<' '<<1<<endl;
            }
            else{
                cout<<n/2-2<<' '<<n/2+2<<' '<<1<<endl;
            }
        }
    }
    return 0;
}