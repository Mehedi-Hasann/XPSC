#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int n;
    cin>>n;
    int ar[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    bool flag = false;
    for(int i=0;i<(1<<n);i++)
    {
        int ans1 = 0;
        for(int j=0;j<n;j++)
        {
            if( (i & (1<<j)) != 0){
                ans1+=ar[j];
            }
            else{
                ans1-=ar[j];
            }
        }
        if(ans1%360==0){
            flag = true;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}