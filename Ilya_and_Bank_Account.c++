#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    if(s[0]!='-')
    {
        cout<<s;
        return 0;
    }
    else
    {
        if(s[s.size()-1]>s[s.size()-2])
            s.pop_back();
        else
        {
            char temp=s[s.size()-1];
            s.pop_back();
            s.pop_back();
            s+=temp;
        }
    }
    if(s[0]=='-' && s[1]=='0')
    cout<<0;
    else
    cout<<s;
    return 0;
}