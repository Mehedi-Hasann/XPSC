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
        vector<int>vec,re;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            vec.push_back(x);
        }
        for(int i = n-1;i>=0;i--){
            re.push_back(vec[i]);
        }
        bool flag = true;
        for(int i=0;i<n;i++){
            if(re[i]!=vec[i]){
                flag = false;
                break;
            }
        }
        if(flag == false){
            for(int i=0;i<n;i++)
                cout<<re[i]<<' ';
            cout<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            if(vec[i]==0)
                cout<<1<<' ';
            else{
                cout<<0<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}