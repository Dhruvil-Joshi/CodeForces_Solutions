#include<iostream>
using namespace std;
int main ()
{
    int a,b,n;
    cin>>n;
    if((n%2)==1)
    {
        cout<<"NO";
    }
    if((n%2)==0)
    {
        a=n-2;
        b=n-a;
        if(a>0&&b>0&&(a%2)==0&&(b%2)==0)
        {
            cout<<"YES";
        }
        else
        cout<<"NO";
    }
    return 0;
}