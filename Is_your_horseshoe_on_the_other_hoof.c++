#include<iostream>
using namespace std;
int main(){
    unsigned long long int arr[4];
    int count=0;
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<4;j++)
        {
            if(arr[i]>=arr[j])
            {
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}