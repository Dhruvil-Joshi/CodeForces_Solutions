#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int loop;
    cin>>loop;
    for(int k=0;k<loop;k++)
    {
        char arr[9];
        for(int i=0;i<9;i++)
        {
            cin>>arr[i];        
        }
    if(arr[0]==arr[3]&&arr[3]==arr[6]&&arr[0]!='.')
    {
        cout<<arr[0]<<endl;
    }
    else if(arr[1]==arr[4]&&arr[4]==arr[7]&&arr[7]!='.')
    {
        cout<<arr[1]<<endl;
    }
    else if(arr[2]==arr[5]&&arr[5]==arr[8]&&arr[8]!='.')
    {
        cout<<arr[2]<<endl;
    }
    else if(arr[0]==arr[1]&&arr[2]==arr[1]&&arr[1]!='.')
    {
        cout<<arr[1]<<endl;
    }
    else if(arr[3]==arr[4]&&arr[4]==arr[5]&&arr[5]!='.')
    {
        cout<<arr[3]<<endl;
    }
    else if(arr[6]==arr[7]&&arr[7]==arr[8]&&arr[8]!='.')
    {
        cout<<arr[6]<<endl;
    }
    else if(arr[0]==arr[4]&&arr[4]==arr[8]&&arr[4]!='.')
    {
        cout<<arr[0]<<endl;
    }
    else if(arr[2]==arr[4]&&arr[4]==arr[6]&&arr[6]!='.')
    {
        cout<<arr[2]<<endl;
    }
    else
    {
        cout<<"DRAW"<<endl;
    }
    }
    return 0;
}
