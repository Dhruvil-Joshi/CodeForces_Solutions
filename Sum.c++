#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n!=0)
    {
        vector<int> sum;
        int a,b,c;
        cin>>a>>b>>c;
        sum.push_back(a);
        sum.push_back(b);
        sum.push_back(c);
        sort(sum.begin(),sum.end());
        if(sum[0]+sum[1]==sum[2])
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        n--;
    }
    return 0;
}