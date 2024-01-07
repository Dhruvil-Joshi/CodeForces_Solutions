#include <iostream>
using namespace std;
int main() {
    int k,n,w,ans=0;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
        ans=ans+k*i;
    }
    if(ans-n>0)
    {
        ans=ans-n;
    }
    else
    {
        ans=0;
    }
    cout<<ans;
    return 0;
}