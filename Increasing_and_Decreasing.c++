#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int j=0;j<n;j++)
    {
    int a,b,c;
    cin>>a>>b>>c;
    if(b-a>=c)
    {
        int arr[c];
        arr[c-1]=b;
        int cnt=1;
        for(int i=c-2;i>0;i--)
        {
            arr[i]=arr[i+1]-cnt;
            cnt++;
        }
        arr[0]=a;
        if(arr[1]-arr[0]<=arr[2]-arr[1])
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(int i=0;i<c;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<-1<<endl;
    }
    }
    return 0;
}