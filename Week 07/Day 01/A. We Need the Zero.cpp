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
        int n,sum=0;
        cin>>n;
        int ar[n+2];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            sum ^= ar[i];
        }
        if(n%2 != 0){
            cout<<sum<<endl;
        }
        else
        {
            if(sum==0){
                cout<<0<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}