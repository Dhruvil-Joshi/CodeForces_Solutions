#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,count=1,max=1;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<=arr[i+1])
        {
            count++;
        }
        else
        {
            count=1;
        }
         if(max<=count)
        {
            max=count;
        }
    }
    cout<<max<<endl;
    return 0;
}
