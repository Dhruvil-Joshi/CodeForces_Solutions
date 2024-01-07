#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,ans;
    cin>>s;
    if(islower(s[0]))
    {
        ans+=toupper(s[0]);
        for(int i=1;i<s.length();i++)
    {
         if(isupper(s[i]))
         {
             ans+=tolower(s[i]);
         }
         else
         {
            cout<<s;
            return 0;
         }
     }
         cout<<ans;
         return 0;
    }
    else
    {
        ans="";
        for(int i=0;i<s.length();i++)
     {
         if(isupper(s[i]))
         {
             ans+=tolower(s[i]);
         }
         else
         {
             cout<<s;
             return 0;
         }
     }
         cout<<ans;
         return 0;
    }
    return 0;
}