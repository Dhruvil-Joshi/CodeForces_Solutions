#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int loop;
    cin>>loop;
    for(int j=0;j<loop;j++)
    {
    string s;
    cin>>s;
    if(s[0]=='b'&&s[1]=='c' || s[0]=='c'&&s[1]=='a')
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    }
    return 0;
}