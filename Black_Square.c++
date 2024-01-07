#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d,ans=0;
    cin>>a>>b>>c>>d;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            ans+=a;
        }
        else if(s[i]=='2')
        {
            ans+=b;
        }
        else if(s[i]=='3')
        {
            ans+=c;
        }
        else if(s[i]=='4')
        {
            ans+=d;
        }
    }
    cout<<ans;
    return 0;
}