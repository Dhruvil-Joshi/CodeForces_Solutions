#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    string hello="hello";
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==hello[count])
        count++;
        if(count==5)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}