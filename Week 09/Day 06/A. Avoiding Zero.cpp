#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;          cin>>t;
    while(t--){
        int n,sum1=0,sum2=0;
        cin>>n;
        int ar[n+5];
        vector<int>pos,neg;
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]<0){
                sum1 += abs(ar[i]);
                neg.push_back(ar[i]);
            }
            else{
                sum2 += ar[i];
                pos.push_back(ar[i]);
            }
        }
        if(sum1==sum2){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            sort(neg.begin(),neg.end());
            sort(pos.begin(),pos.end());
            if(sum1>sum2){
                for(int i=0;i<neg.size();i++){
                    cout<<neg[i]<<' ';
                }
                for(int i=0;i<pos.size();i++){
                    cout<<pos[i]<<' ';
                }
            }
            if(sum1<sum2){
                sort(pos.rbegin(),pos.rend());
                for(int i=0;i<pos.size();i++){
                    cout<<pos[i]<<' ';
                }
                for(int i=0;i<neg.size();i++){
                    cout<<neg[i]<<' ';
                }
            }
            cout<<endl;
        }
    }
    return 0;
}