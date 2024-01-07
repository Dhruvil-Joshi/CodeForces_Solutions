#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int a,b;
    cin>>a>>b;
    long long int count=0;
    if(a>b)
    {
        a=a-b;
        cout<<b<<" "<<a/2;
    }
    else
    {
        b=b-a;
        cout<<a<<" "<<b/2;
    }
    return 0;
}