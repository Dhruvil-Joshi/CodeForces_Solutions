#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s,answer="";
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            if(answer!="")
            {
                answer+=" ";
            }
            i=i+2;
        }
        else
        {
            answer+=s[i];
        }
    }
    cout<<answer<<endl;
    return 0;
}