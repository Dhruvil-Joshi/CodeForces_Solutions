#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int loop;
    cin>>loop;
    for(long long int j=0;j<loop;j++)
    {
        int n;
        cin>>n;
        int a[n];
        int mini=INT_MAX;
        int mini_index;
        long long answer=1;
        for(int j=0;j<n;j++)
        {
            cin>>a[j];
            if(a[j]<mini)
            {
                mini=a[j];
                mini_index=j;
            }
        }
        a[mini_index]=a[mini_index]+1;
        for(int j=0;j<n;j++)
        {
            answer=answer*a[j];
        }
        cout<<answer<<endl;
    }
    return 0;
}