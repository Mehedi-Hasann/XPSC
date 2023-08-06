#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    string a,b;
    cin>>a>>b;
    if(a==b){
        cout<<-1<<endl;
    }
    else{
        cout<<max(a.size(),b.size())<<endl;
    }
    return 0;
}