#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int loop;
    cin>>loop;
    for(int x=0;x<loop;x++)
    {
    int n,m;
    cin>>n>>m;
    string vika="vika";
    char arr[n][m];
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<m;col++)
        {
            cin>>arr[row][col];
        }
    }
    int k=0;
    int flag=0;
    for(int col=0;col<m;col++)
    {
        label:
        for(int row=0;row<n;row++)
        {
            if(arr[row][col]==vika[k])
            {
                if(col==m)
                {
                    goto end_statement;
                }
                k++;
                if(k==4)
                {
                    flag=1;
                    goto end_statement;
                }
                col++;
                goto label;
            }
        }
    }
    end_statement:
    if(flag==1)
    {
       cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
    return 0;
}