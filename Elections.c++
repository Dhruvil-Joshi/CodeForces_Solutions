#include <iostream>
using namespace std;
void election()
{
    unsigned long long int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c)
    {
        cout<<1<<" "<<1<<" "<<1<<endl;
    }
    else
    {
        if(a>b && a>c)
        {
            cout<<0<<" "<<a-b+1<<" "<<a-c+1<<endl;
        }
        else if(b>a && b>c)
        {
            cout<<b-a+1<<" "<<0<<" "<<b-c+1<<endl;
        }
        else if(c>a && c>b)
        {
            cout<<c-a+1<<" "<<c-b+1<<" "<<0<<endl;
        }
        else if(a<b && b==c)
        {
            cout<<b-a+1<<" "<<1<<" "<<1<<endl;
        }
        else if(b<c && a==c)
        {
            cout<<1<<" "<<c-b+1<<" "<<1<<endl;
        }
        else if(c<b && b==a)
        {
            cout<<1<<" "<<1<<" "<<b-c+1<<endl;
        }
    }
}
int main() 
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        election();
    }
    return 0;
}