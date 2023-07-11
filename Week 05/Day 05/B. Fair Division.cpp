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
        int n, one=0, two = 0, sum = 0;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(x==1)
                one++;
            else
                two++;
            sum+=x;
        }
        if(sum%2!=0){
            cout<<"NO"<<endl;
        }
        else if(one==0 and two%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}