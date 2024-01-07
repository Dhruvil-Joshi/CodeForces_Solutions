#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,sum=0,count=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(5*i);
    }
    for(int i=n;i>=0;i--)
    {
        int timeq = sum;
        if(timeq+k<=240)
        {
            cout<<(n-count);
            return 0;
        }
        count++;
        sum=sum-(5*i);
    }
    cout<<0;
    return 0;
}
