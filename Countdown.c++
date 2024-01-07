#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int count=0;
        int size;
        cin>>size;
        string a;
        cin>>a;
        if(a[size-1]!='0')
        {
            count+=a[size-1]-48;
        }
        for(int j=0;j<size-1;j++)
        {
            if(a[j]!='0')
            {
                count+=a[j]-47;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
