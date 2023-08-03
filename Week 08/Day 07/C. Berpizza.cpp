#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;          cin>>t;
    int id = 1, caz;
    set< pair<int,int> >ss,tt;
    while(t--)
    {
        cin>>caz;
        if(caz==1){
            int taka;
            cin>>taka;
            ss.insert({id,taka});
            tt.insert({taka,id});
            id++;
        }
        else if(caz==2){
            auto it = ss.begin();
            auto m = *it;
            cout<<m.first<<' ';
            ss.erase(it);
            tt.erase({m.second,m.first});
        }
        else{
            auto it = tt.end();
            it--;
            auto m = *it;
            it = tt.lower_bound({m.first,-1LL});
            //cout<<it->first<<' '<<it->second<<endl;
            m = *it;
            cout<<m.second<<' ';
            tt.erase(it);
            ss.erase({m.second,m.first});
        }
    }
    cout<<endl;
    return 0;
}