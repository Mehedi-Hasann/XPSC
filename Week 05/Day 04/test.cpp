#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool comp(string s1,string s2)
{
    return s1.size()<s2.size();
}
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int n;
    cin>>n;
    vector<string>vec;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        vec.push_back(s);
    }
    sort(vec.begin(),vec.end(),comp);
    for(int i=0;i<n-1;i++){
        if(vec[i+1].find(vec[i])==string :: npos){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    for(auto it : vec){
        cout<<it<<endl;
    }
    return 0;
}