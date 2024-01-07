#include <iostream>
using namespace std;
int main() {
    int n,k=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        if((i%2)==0)
        {
            cout<<"I hate ";
            if(k<n)
            {
                cout<<"that ";
                k++;
            }
        }
        else
        {
            cout<<"I love ";
            if(k<n)
            {
                cout<<"that ";
                k++;
            }
        }
    }
    cout<<"it ";
    return 0;
}