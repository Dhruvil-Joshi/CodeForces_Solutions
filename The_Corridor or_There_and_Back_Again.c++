#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int loop;
    cin>>loop;
    for(int j=0;j<loop;j++)
    {
    int n;
    cin>>n;
    int mini=INT_MAX;
    for(int i=0;i<n;i++)
    {
        int d,s;
        cin>>d>>s;
        s=s-1;
        s=s/2;
        int ans=s+d;
        if(ans<mini)
        mini=ans;
    }
    cout<<mini<<endl;
    }return 0;
}