#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;          cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<string>vec;
        map<string,int>mp;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            vec.push_back(s);
        }
        int i = 0;
        while(m--)
        {
            int u,v;
            cin>>u>>v;
            sort(vec[i].begin()+u-1,vec[i].end()+v+2);
            cout<<vec[i]<<endl;
            i++;
        }
    }
    return 0;
}