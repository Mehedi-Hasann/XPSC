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
        int n,a=0,b=0;
        string s;
        cin>>n>>s;
        if(s[0]=='A')
            a++;
        for(int i=0;i<n-1;i++){
            if(s[i]=='A' and s[i+1]=='A')
                a++;
            else if(s[i]=='B' and s[i+1]=='B')
                b++;
        }
        cout<<a<<' '<<b<<endl;
    }
    return 0;
}