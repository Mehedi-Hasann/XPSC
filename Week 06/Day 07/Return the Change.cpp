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
        if( (100-n)%10<=5 ){
            cout<<100-n-(100-n)%10<<endl;
        }
        else{
            cout<<100-n+(10-(100-n)%10)<<endl;
        }
    }
    return 0;
}