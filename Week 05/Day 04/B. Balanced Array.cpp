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
        if(n%4){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for(int i=2;i<=n;i+=2){
            cout<<i<<' ';
        }
        int j = 1;
        for(int i=1;i<n/2;i++){
            cout<<j<<' ';
            j+=2;
        }
        cout<<j+n/2<<endl;
    }
    return 0;
}