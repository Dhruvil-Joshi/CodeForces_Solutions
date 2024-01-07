#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string arr;
        cin>>arr;
        if(arr=="yes" || arr=="Yes" || arr=="YEs" || arr=="YES" || arr=="yEs" || arr=="yeS" || arr=="YeS" || arr=="yES")
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}