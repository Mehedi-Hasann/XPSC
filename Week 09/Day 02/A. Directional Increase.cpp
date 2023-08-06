#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;          cin>>t;
    while(t--)
    {
        ll n,sum=0;
        cin>>n;
        vector<ll>vec;
        for(int i=0;i<n;i++){
            ll x;      cin>>x;
            vec.push_back(x);
        }
        int j;
        bool flag = true;
        for(int i=0;i<n;i++){
            sum += vec[i];
            if(sum<0){
                flag = false;
                break;
            }
            if(sum==0){
                j = i+1;
                break;
            }
        }
        if(sum!=0 or flag==false){
            cout<<"No"<<endl;
            continue;
        }
        for(int i=j;j<n;j++){
            if(vec[j]!=0){
                flag = false;
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