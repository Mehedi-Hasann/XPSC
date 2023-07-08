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
        map<string,ll>freq;
        map<char,ll>first;
        map<char,ll>second;
        vector<string>vec[n+1];
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            vec[i].push_back(s);
            freq[s]++;
            first[s[0]]++;
            second[s[1]]++;
        }
        int ans = 0;
        for(int i=0;i<n-1;i++)
        {
            ans += first[vec[i][0]]-1-(freq[vec[i]]-1);
            ans += second[vec[i][1]]-1-(freq[vec[i]]-1);
            freq[vec[i]]--;
            first[vec[i][0]]--;
            second[vec[i][0]]--;
        }
        cout<<ans<<endl;
    }
    return 0;
}