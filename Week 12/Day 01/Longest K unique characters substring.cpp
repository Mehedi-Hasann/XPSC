#include<bits/stdc++.h>
#define ll long long
using namespace std;
int longestKSubstr(string s, int k)
{
    int i=0,j=0,n=s.size(),ans=-1,unique=0;
    int freq[26] = {0};
    while(i<n)
    {
        char ch = s[i];
        if(freq[ch-'a']==0)
            unique++;
        freq[ch-'a']++;
        if(unique>k)
        {
            while(unique>k){
                char first = s[j];
                freq[first-'a']--;
                if(freq[first-'a']==0)
                    unique--;
                j++;
            }
        }
        if(unique==k)
        {
            ans = max(ans,i-j+1);
        }
        i++;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    string s;
    cin>>s;
    int k;
    cin>>k;
    cout<<longestKSubstr(s,k)<<endl;
    return 0;
}