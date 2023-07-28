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
        int b,c,h,ans;
        cin>>b>>c>>h;
        if((c+h)<=b-1){
            ans = c+h + c+h+1;
        }
        else{
            ans = b+b-1;
        }
        cout<<ans<<endl;
    }
    return 0;
}