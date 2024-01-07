#include<iostream>
using namespace std;
int main()
{
    int a,b,c,i,n,count=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if((a==1&&b==1)||(a==1&&c==1)||(b==1&&c==1))
        {
            count=count+1;
        }
    }
    cout<<count;
    return 0;
}