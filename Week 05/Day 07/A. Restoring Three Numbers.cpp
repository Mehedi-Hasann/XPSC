#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mx = max(a,max(b,max(c,d)));
    if(mx==a)
    {
        cout<<mx-d<<' '<<mx-c<<' '<<mx-b<<endl;
    }
    else if(mx==b)
    {
        cout<<mx-d<<' '<<mx-c<<' '<<mx-a<<endl;
    }
    else if(mx==c)
    {
        cout<<mx-d<<' '<<mx-b<<' '<<mx-a<<endl;
    }
    else if(mx==d)
    {
        cout<<mx-c<<' '<<mx-b<<' '<<mx-a<<endl;
    }
    return 0;
}