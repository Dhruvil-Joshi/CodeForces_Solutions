#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> Money;
    int total=0;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        Money.push_back(a);
        total+=a;
    }
    sort(Money.begin(),Money.end(),greater<int>());
    int i=0;
    int bigside=0,cnt=0;
    while(true)
    {
        bigside+=Money[i];
        total=total-Money[i];
        cnt++;
        if(bigside>total)
        {
            cout<<cnt;
            return 0;
        }
        i++;
    }
    cout<<0;
    return 0;
}