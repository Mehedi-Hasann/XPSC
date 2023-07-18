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
        float n,m;
        cin>>n>>m;
        n=n-n*0.1;
       // cout<<n<<endl;
        if(n==m){
            cout<<"EITHER"<<endl;
        }
        else if(n<m){
            cout<<"ONLINE"<<endl;
        }
        else{
            cout<<"DINING"<<endl;
        }
    }
    return 0;
}