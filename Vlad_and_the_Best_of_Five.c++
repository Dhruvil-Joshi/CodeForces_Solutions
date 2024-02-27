#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        int cnta=0,cntb=0;
        for(int j=0;j<5;j++)
        {
            if(s[j]=='A')
            cnta++;
            else
            cntb++;
        }
        if(cnta>cntb)
        cout<<"A"<<endl;
        else
        cout<<"B"<<endl;
    }
    return 0;
}