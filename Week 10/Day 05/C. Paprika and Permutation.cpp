#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;          cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        set<int>st;
        vector<int>vec,rem;
        for(int i=1;i<=n;i++){
            st.insert(i);
        }
        for(int i = 0; i<n;i++){
            int x;      cin>>x;
            if(st.find(x) != st.end()){
                st.erase(x);
            }
            else{
                rem.push_back(x);
            }
        }
        sort(rem.rbegin(),rem.rend());
        bool flag = true;
        for(auto &it : rem){
            auto val = st.end();
            val--;
            int res = *val;
            st.erase(val);
            if((it-1)/2 < res){
                flag = false;
                break;
            }
        }
        if(!flag){
            cout<<-1<<endl;
        }
        else{
            cout<<rem.size()<<endl;
        }
    }
    return 0;
}