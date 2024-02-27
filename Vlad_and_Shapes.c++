#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        bool flag=true;
        for(int j=0;j<m;j++)
        {
            int count=0;
            string s;
            cin>>s;
            for(int k=0;k<m;k++)
            {
                if(s[k]=='1')
                count++;
            }
            if(count==1)
            flag=false;
        }
        if(flag)
        cout<<"SQUARE"<<endl;
        else
        cout<<"TRIANGLE"<<endl;
    }
    return 0;
}