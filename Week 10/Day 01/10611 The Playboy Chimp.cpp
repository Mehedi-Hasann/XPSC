#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int a;
    cin>>a;
    vector<int>ar(a);
    for(int i=0;i<a;i++){
        cin>>ar[i];
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int it1 = lower_bound(ar.begin(),ar.end(),n) - ar.begin();
        int it2 = upper_bound(ar.begin(),ar.end(),n) - ar.begin();
        //cout<<it1<<' '<<it2<<endl;
        if(it1==0){
            cout<<"X ";
        }
        else{
            cout<<ar[it1-1]<<' ';
        }
        if(it2==a){
            cout<<"X"<<endl;
        }
        else{
            cout<<ar[it2]<<endl;
        }
    }
    return 0;
}