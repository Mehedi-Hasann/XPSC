#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while(t--)
    {
        string s;
        cin>>s;
        int n = s.size(),ans = INT_MAX;
        for(char i = 'a';i<='z';i++){
            int cnt = 0, val = 0,res = 0;
            for(int j = 0;j<n;j++){
                if(s[j]==i){
                    while(cnt>0){
                        cnt/=2;
                        val++;
                    }
                    res = max(res,val);
                    cnt = 0,val = 0;
                }
                else{
                    cnt++;
                }
            }
            while(cnt>0){
                cnt/=2;
                val++;
            }
            res = max(res,val);
            ans = min(res,ans);
        }
        cout<<ans<<endl;
    }
    return 0;
}