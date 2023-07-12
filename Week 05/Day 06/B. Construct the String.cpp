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
        int n,a,b,dis = 0,j=0;
        cin>>n>>a>>b;
        string ans = "";
        char inc = 'a';
        for(int i=0;i<n;i++){
            if(i<a){
                ans += inc;
                if(dis==b-1){
                    continue;
                }
                else{
                    if(inc == 'z')
                        inc = 'a';
                    else
                        inc++;
                    dis++;
                }
            }
            else{
                if(ans[j]!=ans[j+1]){
                    if(inc=='z'){
                        inc = 'a';
                    }
                    else{
                        inc++;
                    }
                    ans += inc;
                }
                else{
                    ans+=inc;
                }
                j++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}