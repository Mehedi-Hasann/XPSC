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
        string s;
        cin>>s;
        int one = 0, zero = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')
                one++;
            else
                zero++;
        }
        if(min(one,zero) & 1){
            cout<<"Zlatan"<<endl;
        }
        else{
            cout<<"Ramos"<<endl;
        }
    }
    return 0;
}