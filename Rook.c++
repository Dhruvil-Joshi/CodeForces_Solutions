#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    for(long long int i=0;i<n;i++)
    {
        char p;
        int n;
        cin>>p>>n;
        for(int i=1;i<=8;i++)
        {
            if(n!=i)
            cout<<p<<i<<endl;
        }
        for(char i='a';i<'i';i++)
        {
            if(p!=i)
            cout<<i<<n<<endl;
        }
    }
    return 0;
}