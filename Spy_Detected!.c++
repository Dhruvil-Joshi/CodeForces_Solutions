#include <iostream>
using namespace std;
int main() {
    int total;
    cin>>total;
    for(int j=0;j<total;j++)
    {
    int n;
    cin>>n;
    int arr[n];
    int flag=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(sizeof(arr)==1 || (arr[0]!=arr[1] && arr[1]==arr[2]))
    {
        cout<<1<<endl;
    }
    else
    {
        for(int i=1;i<n-1;i++)
        {
            if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1])
            {
                flag=1;
                cout<<i+1<<endl;
            }
        }
        if(flag==0)
        {
          cout<<n<<endl;  
        }
    }
    }
    return 0;
}