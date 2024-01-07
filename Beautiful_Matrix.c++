#include <iostream>
using namespace std;
int main() {
    int count=0,arr[5][5];
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(arr[i][j]==1)
            {
            count=count+abs(2-i)+abs(2-j);
            arr[i][j]=0;
            cout<<count;
            break;
            }
        }
    }
    arr[2][2]=1;
    return 0;
}