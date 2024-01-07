#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    if(n%10==0)
    {
        cout<<1;
    }
    else if(((n%5)==0) && ((m%5)!=0))
    {
        cout<<2;
    }
    else if(((n%5)==0) && ((m%5)==0))
    {
        cout<<1;
    }
    else if(((n%2)==0) && ((m%2)!=0))
    {
        cout<<5;
    }
    else
    {
        int i=1;
        while(true)
        {
            if(((n*i)%10)==m)
            break;
            else
            i++;
        }
        cout<<i;
    }
    return 0;
}