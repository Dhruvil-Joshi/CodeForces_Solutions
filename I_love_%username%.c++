#include <iostream>
using namespace std;
int main() {
    int n,a;
    int min=0,max=0,count=0;
    cin>>n;
    if(n==1)
    {
        cin>>a;
        cout<<0;
        return 0;
    }
    cin>>a;
    max=a;
    min=a;
    for(int i=0;i<n-1;i++)
    {
        cin>>a;
        if(a>max)
        {
            max=a;
            count++;
        }
        if(a<min)
        {
            min=a;
            count++;
        }
    }
    cout<<count;
    return 0;
}