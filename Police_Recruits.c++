#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int n,a;
    cin>>n;
    int pm=0,cr=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==-1&&pm==0)
        {
            cr++;
        }
        if(a>0)
        {
            pm+=a;
        }
        if(pm>0&&a==-1)
        {
            pm--;
        }
    }
    cout<<cr;
    return 0;
}
