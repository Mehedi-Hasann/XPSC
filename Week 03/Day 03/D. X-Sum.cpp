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
        int row,col;
        cin>>row>>col;
        int ar[row+1][col+1];
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin>>ar[i][j];
            }
        }
        int ans[row][col];
        for(int i=0;i<row;i++)
        {
            int val,r,c;
            for(int j=0;j<col;j++)
            {
                val = 0,r=i,c=j;
                while(true)
                {
                    if(r<row and c<col){
                        val += ar[r][c];
                        r++,c++;
                    }
                    else
                        break;

                }
                r=i+1,c=j-1;
                while(true)
                {
                    if(r<row and c>=0){
                        val += ar[r][c];
                        r++;
                        c--;
                    }
                    else
                        break;

                }
                r = i-1,c=j-1;
                while(true)
                {
                    if(r>=0 and c>=0){
                        val += ar[r][c];
                        r--,c--;
                    }
                    else
                        break;

                }
                r = i-1,c=j+1;
                while(true)
                {
                    if(r>=0 and c<col){
                        val += ar[r][c];
                        r--,c++;
                    }
                    else
                        break;

                }
                ans[i][j] = val;
            }
        }
        int value = INT_MIN;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++)
                value = max(value,ans[i][j]);
        }
        cout<<value<<endl;
    }
    return 0;
}