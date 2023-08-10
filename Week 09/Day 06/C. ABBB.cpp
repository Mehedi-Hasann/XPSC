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
        int n = s.size(),cnt = 0;
        for(int i=0;i<n;i++){
            if(cnt==0 and s[i]=='B'){
                cnt++;
                continue;
            }
            if(s[i]=='A'){
                cnt++;
            }
            else{
                cnt--;
                if(cnt<=0){
                    cnt = 0;
                }
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}