#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n;
    cin>>n;
    for(long long int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        cout<<s[0];
        for(int j=1;j<s.size()-1;)
        {
            cout<<s[j];
            j=j+2;
        }
        cout<<s[s.size()-1]<<endl;
    }
    return 0;
}
