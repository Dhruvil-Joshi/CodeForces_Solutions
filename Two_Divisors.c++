#include <bits/stdc++.h>
using namespace std;

void goodbye()
{
    long long int loop;
    cin >> loop;
    for (long long int i = 0; i < loop; i++)
    {
        long long int a,b;
        cin>>a>>b;
        if(a==1)
        {
            cout<<b*b<<endl;
        }
        else
        {
           long long int lcmans /*= std::lcm(a, b) Remove this comment before running this program*/;
           if(lcmans!=b)
           {
                cout<<lcmans<<endl;
           } 
           else
           {
                cout<<b*b/a<<endl;
           }
        }
    }
}
int main()
{
    goodbye();
    return 0;
}