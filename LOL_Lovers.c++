#include<bits/stdc++.h>
using namespace std;

void LOL()
{
    int n,i=0,L=0,O=0,LL=0,LO=0;
    cin>>n;
    char s[n];
    for(;i<n;i++)
    {
        cin>>s[i];
        if(s[i]=='L')
        L++;
        else
        O++;
    }
    bool flag=true;
    i=0;
    while(flag && i!=n)
    {
        if(s[i]=='L')
        {
            LL++;
            L--;
        }
        else
        {
            LO++;
            O--;
        }
        if(LL!=L && LO!=O)
        flag=false;
        i++;
    }
    if(flag || (L==0 && O==0))
    cout<<-1<<endl;
    else
    cout<<LL+LO<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LOL();
    return 0;
}