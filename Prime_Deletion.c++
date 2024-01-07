#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        bool setflag=true;
        int flag3=0;
        int flag7=0;
        int j=0;
        while(setflag)
        {
            if(s[j]=='3')
            {
                flag3=1;
                setflag=false;
            }
            if(s[j]=='7')
            {
                flag7=1;
                setflag=false;
            }
            j++;
        }
        if(flag3)
        cout<<37<<endl;
        else if(flag7)
        cout<<73<<endl;
    }
    return 0;
}