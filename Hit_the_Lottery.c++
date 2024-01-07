#include <iostream>
using namespace std;
int main() {
    int n,count=0;
    cin>>n;
    int arr[5]={100,20,10,5,1};
    for(int i=0;n>0;i++)
    {
        int temp=n/arr[i];
        count+=temp;
        n=n-(arr[i]*temp);
    }
    cout<<count<<endl;
    return 0;
}