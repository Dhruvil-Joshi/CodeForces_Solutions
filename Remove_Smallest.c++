#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long int size;
        int flag=0;
        cin>>size;
        vector<long int> arr;
        for(int j=0;j<size;j++)
        {
            long int a;
            cin>>a;
            arr.push_back(a);
        }
        sort(arr.begin(),arr.end());
        for(int j=0;j<size-1;j++)
        {
            if(arr[j+1]-arr[j]>1)
            {
                flag=1;
                break;
            }
            if(flag==1)
            {
                break;
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}