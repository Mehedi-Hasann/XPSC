#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t = 1,cs = 1;
    cin >> t;
    string all = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while(t--)
    {
        cout<<"Case "<<cs<<":"<<endl;
        cs++;
        int n,k;
        cin>>n>>k;
        string sub = all.substr(0,n);
        string check = sub;
        cout<<sub<<endl;
        for(int i=0;i<k-1;i++){
            //cout<<sub<<endl;
            next_permutation(sub.begin(),sub.end());
            if(sub==check){
                break;
            }
            cout<<sub<<endl;
        }
    }
    return 0;
}