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
        int n,m;
        cin>>n>>m;
        char vec[n+1][m+1];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>vec[i][j];
            }
        }
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<m;i++)
            {
                bool flag = false;
                int a, b;
                for(int j=0;j<n;j++)
                {
                    if(vec[j][i]=='o' and flag == true)
                    {
                        flag = false;
                    }
                    else if(vec[j][i]=='*' and flag == false){
                        a = j,b = i;
                        flag = true;
                    }
                    else if(vec[j][i]=='.' and flag==true)
                    {
                        vec[j][i] = '*';
                        vec[a][b] = '.';
                        a = j, b = i;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cout<<vec[i][j];
            cout<<endl;
        }
    }
    return 0;
}