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
        if(n & 1){
            cout<<-1<<endl;
        }
        else{
            for(int i=n;i>=1;i--){
                cout<<i<<' ';
            }
            cout<<endl;
        }
    }
    return 0;
}