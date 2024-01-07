#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int count=0;
    int s[n];
    int sp=0;
    int dp=0;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int i=0;
    for(;i<n;)
    {
        int temp;
        if(s[i]>s[n-1])
        {
            temp=s[i];
            i++;
        }
        else
        {
            temp=s[n-1];
            n=n-1;
        }
        if(count%2==0)
        sp+=temp;
        else
        dp+=temp;
        count++;
    }
    cout<<sp<<" "<<dp;
    return 0;
}