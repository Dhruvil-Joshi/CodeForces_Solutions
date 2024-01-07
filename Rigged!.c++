#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int loop;
    cin>>loop;
    for(int j=0;j<loop;j++)
    {
    int n;
    cin>>n;
    int w,flag=0;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    w=a[0];
    for(int i=1;i<n;i++)
    {
    if(a[i]>=w && b[i]>=b[0])
        {
            w=-1;
            flag=1;
            break;
        }
        if(flag==1)
        break;
    }
    cout<<w<<endl;
    }
    return 0;
}