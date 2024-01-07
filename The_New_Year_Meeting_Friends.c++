#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int maxnum=max(a,max(b,c));
    int minnum=min(a,min(b,c));
    cout<<maxnum-minnum;
    return 0;
}