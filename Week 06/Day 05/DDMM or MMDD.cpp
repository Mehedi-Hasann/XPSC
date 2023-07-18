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
        int first = (s[0]-'0')*10 + s[1]-'0';
        int second = (s[3]-'0')*10 + s[4]-'0';
        if(first<=12 and second<=12){
            cout<<"BOTH"<<endl;
        }
        else if(first<=12 and second>=12){
            cout<<"MM/DD/YYYY"<<endl;
        }
        else{
            cout<<"DD/MM/YYYY"<<endl;
        }
    }
    return 0;
}