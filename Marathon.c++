#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        int cnt=0;
        for(int j=0;j<3;j++)
        {
            int b;
            cin>>b;
            if(a<b)
            {
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}