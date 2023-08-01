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
        int n,id=0;
        char ch;
        bool flag = true;
        cin>>n>>ch;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i] != ch){
                flag = false;
            }
            else{
                id = i;
            }
        }
        if(flag){
            cout<<0<<endl;
        }
        else if(id==n-1 or 2*(id+1)>n){
            cout<<1<<endl;
            cout<<id+1<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<n-1<<' '<<n<<endl;
        }
    }
    return 0;
}