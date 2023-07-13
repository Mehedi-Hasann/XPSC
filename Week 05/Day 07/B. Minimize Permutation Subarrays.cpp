#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n,one=0,two=0,en=0;
        cin>>n;
        int ar[n+2];
        for(int i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]==1)
                one = i+1;
            else if(ar[i]==2)
                two = i+1;
            else if(ar[i]==n)
                en = i+1;
        }
        if(one>two)
            swap(one,two);
        if(en<one and en<two){
            cout<<min(one,en)<<' '<<max(en,one)<<endl;
        }
        else if(en>one and en<two)
            cout<<1<<' '<<1<<endl;
        else if(en>one and en>two){
            cout<<min(en,two)<<' '<<max(en,two)<<endl;
        }
    }
    return 0;
}