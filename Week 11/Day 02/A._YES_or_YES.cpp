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
        string s;
        cin>>s;
        for(int i=0;i<3;i++){
            if(isupper(s[i]))
                s[i] = tolower(s[i]);

        }
        if(s=="yes")
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}