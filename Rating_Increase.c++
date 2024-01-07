#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int loop;
    cin>>loop;
    for(int x=0;x<loop;x++)
    {
        string s;
        cin>>s;
        string a="",b="";
        a=s[0];
        int i=1;
        while(s[i]=='0' && i<s.size())
        {
            a+=s[i];
            i++;
        }
        while(i<s.size())
        {
            b+=s[i];
            i++;
        }
        if(a.size()<b.size())
        cout<<a<<" "<<b<<endl;
        else if(a.size()>b.size())
        {
            cout<<-1<<endl;
        }
        else
        {
            if(a.size()==b.size())
            {
                if(a>=b)
                cout<<-1<<endl;
                else
                cout<<a<<" "<<b<<endl;
            }
        }
    }
    return 0;
}