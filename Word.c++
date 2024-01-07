#include <iostream>
using namespace std;
int main() {
    int u=0,l=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i])==0)
        {
            u++;
        }
        if(islower(s[i])==0)
        {
            l++;
        }
    }
    for(int i=0;i<s.size();i++)
    {
        if(u>=l)
        {
            s[i]=tolower(s[i]);
            cout<<s[i];
        }
        else
        {
            s[i]=toupper(s[i]);
            cout<<s[i];
        }
    }
    return 0;
}