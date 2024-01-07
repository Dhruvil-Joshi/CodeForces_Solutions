#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        float total=a+b;
        total=total/2;
        total=total-a;
        if(total<0)
        total=total*(-1);
        total=total/c;
        cout<<ceil(total)<<endl;
    }
    return 0;
}
