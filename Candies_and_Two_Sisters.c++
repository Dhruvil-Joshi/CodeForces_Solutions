#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long int a;
        cin>>a;
        if(a%2==0)
            cout<<(a-1)/2<<endl;
        else
        cout<<a/2<<endl;
    }
}