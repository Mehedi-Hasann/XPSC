#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false),cin.tie(nullptr),cout.tie(nullptr);
    int t;
    cin>>t;
    while (t--)
    {
        int n,msb;
        cin>>n;
        //cout<<"for n = "<<n<<endl;
        for(int i=31;i>=0;i--){
            if( ((n>>i) & 1) == 1 ){
                msb = i;
                //cout<<msb<<endl;
                break;
            }
        }
        cout<<(1<<msb)-1<<endl;
    }
    return 0;
}