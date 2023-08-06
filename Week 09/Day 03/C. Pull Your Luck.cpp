#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;          cin>>t;
    while(t--)
    {
        ll n,x,p,sum=0;
        bool flag = false;
        cin>>n>>x>>p;
        ll rem = (n-x)%n;
        for(int i=1;i<=min(2*n,p);i++){
            sum += i;
            if(sum%n==rem){
                flag = true;
                break;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}