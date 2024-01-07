#include <iostream>
using namespace std;
int main() {
    int n,count=0,q=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>q>>arr[i];
        if((q<arr[i])&&((arr[i]-q)>=2))
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
