#include <iostream>
using namespace std;
int main() 
{
    int n,target,count=0;
    cin>>n>>target;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>=a[target-1])
        {
             if(a[i]<=0)
        {
            continue;
        }
        else
        {
            count++;
        }
    }
    }
    cout<<count;
    return 0;
}