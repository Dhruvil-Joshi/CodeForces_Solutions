#include <iostream>
using namespace std;
int main() {
    int n,q;
    cin>>n>>q;
    for(int i=0;i<q;i++)
    {
        if((n%10)==0)
        {
            n=n/10;
            continue;
        }
        else
        {
            n=n-1;
        }
    }
    cout<<n;
    return 0;
}