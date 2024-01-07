#include <bits/stdc++.h>
using namespace std;
 
void odd()
{
    int loop;
    cin >> loop;
    for (int i = 0; i < loop; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b)
            cout<<c<<endl;
        else if(a==c)
            cout<<b<<endl;
        else
            cout<<a<<endl;
    }
}
int main()
{
    odd();
    return 0;
}