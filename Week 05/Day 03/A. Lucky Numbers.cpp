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
        int a,b,val = -1;
        cin>>a>>b;
        int ans = a;
        for(int i=a;i<=b;i++){
            string s ;
            s = to_string(i);
            sort(s.begin(),s.end());
            int dif = abs(s[s.size()-1]-s[0]);
            if(dif==9){
                ans = i;
                break;
            }
            if(dif>val){
                ans = i;
                val = dif;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}