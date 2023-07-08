#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t,j=0;
    cin>>t;
    int ar[12];
    for(int i=9;i>=1;i--){
        ar[j] = i;
        j++;
    }
    while(t--){
        ll n;
        cin>>n;
        string s="";
        if(n<=9){
            cout<<n<<endl;
            continue;
        }
        for(int i=0;i<=8;i++)
        {
            if(n>=ar[i]){
                s+=ar[i]+'0';
                n-=ar[i];
            }
        }
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
    return 0;
}