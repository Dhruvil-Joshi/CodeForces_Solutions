#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        char a;
        cin>>a;
        if(a=='c' || a=='o' || a=='d' || a=='e' || a=='f' || a=='r' || a=='s')
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}