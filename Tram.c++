#include <iostream>
using namespace std;
int main() {
    int n,a[1000],b[1000],max=0,total=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++)
    {
        total=total+b[i]-a[i];
        if(max<total)
        {
            max=total;
        }
    }
    cout<<max;
    return 0;
}