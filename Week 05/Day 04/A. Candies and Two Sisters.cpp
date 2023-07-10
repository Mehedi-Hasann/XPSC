#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;
    cin>>t;
    while ((t--))
    {
        int n;
        cin>>n;
        if(n<=2){
            cout<<0<<endl;
        }
        else if(n%2==0){
            cout<<n-n/2-1<<endl;
        }
        else{
            cout<<n/2<<endl;
        }
    }
    return 0;
}