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
        if(n%7==0 and (n&1)==0){
            cout<<"Alice"<<endl;
        }
        else if(n%9==0 and (n&1)==1){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Charlie"<<endl;
        }
    }
    return 0;
}