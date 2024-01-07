#include <iostream>
using namespace std;
int main() {
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
    int n,flag=0;
    cin>>n;
    int arr[n];
    int total=0,min=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        total+=arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        total=total-arr[i];
        min+=arr[i];
        if(total%2==min%2)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else{
     cout<<"NO"<<endl;
    }
}
return 0;
}