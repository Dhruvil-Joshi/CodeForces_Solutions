#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count;
    if(((arr[0]%2)!=(arr[1]%2))&&((arr[1]%2)==(arr[2]%2)))
        {
            count=1;
            goto label;
        }
    for(int i=0;i<n-2;i++)
    {
        if(((arr[i]%2)!=(arr[i+1]%2))&&((arr[i]%2)==(arr[i+2]%2)))
        {
            count=i+2;
            break;
        }
        else
        count=n;
    }
    label:
    cout<<count;
    return 0;
}