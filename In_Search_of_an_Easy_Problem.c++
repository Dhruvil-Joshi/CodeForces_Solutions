#include <iostream>
using namespace std;
int main() {
    int n,flag=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            cout<<"HARD";
            return 0;
        }
    }
    cout<<"EASY";
    return 0;
}