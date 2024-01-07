#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c,d;
    int flag=0;
    cin>>a>>b>>c;
    d=c;
    if((c%b==0)||(c%a==0))
    {
       cout<<"YES"<<endl;
    }
    else
    {
        if(a>b)
        {
            for(int i=0;i<d;i++)
            {
                c=c-a;
                if(c%b==0 && c>=0)
                {
                    flag=1;
                    break;
                }
                if(c<0)
                {
                    break;
                }
            }
        }
        else
        {
            for(int i=0;i<d;i++)
            {
                c=c-b;
                if(c%a==0 && c>=0)
                {
                    flag=1;
                    break;
                }
                if(c<0)
                {
                    break;
                }
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}