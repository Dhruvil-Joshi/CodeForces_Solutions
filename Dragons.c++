#include <bits/stdc++.h>
using namespace std;
int main() {
    int s,n;
    cin>>s>>n;
    int total=s;
    int x,y;
    vector<vector<int>> dr;
    for(int i=0;i<n;i++)
    {
        vector<int>xy;
        cin>>x>>y;
        xy.push_back(x);
        xy.push_back(y);
        dr.push_back(xy);
        xy.clear();
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(dr[i][0]>dr[j][0])
            {
                swap(dr[i][0],dr[j][0]);
                swap(dr[i][1],dr[j][1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
         if(total>dr[i][0])
         {
             total+=dr[i][1];
         }
         else
         {
             cout<<"NO";
             return 0;
         }
    }
    cout<<"YES";
    return 0;
}