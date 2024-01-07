#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int loop;
    cin>>loop;
    for(int j=0;j<loop;j++)
    {
        int a,b,flag=0;
        cin>>a>>b;
        int arr[a];
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
            if(arr[i]==b)
            flag=1;
        }
        if(flag)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}