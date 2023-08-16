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
        int n;
        cin>>n;
        map<string,bool>mp;
        vector<string>ar(n+1);
        for(int i=0;i<n;i++){
            cin>>ar[i];
            mp[ar[i]]=true;;
        }
        string ans="";
        for(int i=0;i<n;i++)
        {
            bool flag = false;
            for(int j=1;j<ar[i].size();j++)
            {
                string x = ar[i].substr(0,j);
                string y = ar[i].substr(j,ar[i].size()-j);
                if(mp.find(x) != mp.end() and  mp.find(y) != mp.end()){
                    ans+='1';
                    flag = true;
                    break;
                }
            }
            if(flag==false)
                ans+='0';
        }
        cout<<ans<<endl;
    }
    return 0;
}