#include <iostream>
using namespace std;
int main() {
    long long int n,m;
    cin>>n>>m;
    if(n%2==0)
    {
        long long mid =n/2;
        if(m<=mid)
        {
            cout<<(2*m)-1;
        }
        else
        {
            cout<<2*(m-mid);
        }
    }
    else
    {
        long long mid =(n+1)/2;
        if(m<=mid)
        {
            cout<<(2*m)-1;
        }
        else
        {
            cout<<2*(m-mid);
        }
    }
    return 0;
}