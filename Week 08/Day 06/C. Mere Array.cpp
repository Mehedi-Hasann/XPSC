#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;      cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+2],br[n+2],mn = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            br[i] = ar[i];
            mn = min(mn,ar[i]);
        }
        sort(br,br+n);
        bool flag = true;
        for(int i=0;i<n;i++){
            if(ar[i] != br[i] and ar[i]%mn){
                flag = false;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}