#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    for(long long int i=0;i<n;i++)
    {
        long long int num;
        cin>>num;
        long long int k=1;
        for(long long int j=0;j<num;j++)
        {
            cout<<k<<" ";
            k=k+2;
        }
        cout<<endl;
    }
    return 0;
}