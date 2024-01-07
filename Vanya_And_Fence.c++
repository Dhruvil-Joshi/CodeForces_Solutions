#include <iostream>
using namespace std;
int main() {
    int n,h,count=0;
    cin>>n>>h;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=h)
        {
            count=count+1;
        }
        else
        {
            count=count+2;
        }
    }
    cout<<count;
    return 0;
}