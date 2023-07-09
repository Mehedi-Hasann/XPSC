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
        int n,sum = 0;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            sum += x;
        }
        if(sum%n){
            cout<<sum/n+1<<endl;
        }
        else{
            cout<<sum/n<<endl;
        }
    }
    return 0;
}