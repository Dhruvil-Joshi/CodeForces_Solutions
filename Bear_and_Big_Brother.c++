#include <iostream>
using namespace std;
int main() {
    int l,b,count=0;
    cin>>l>>b;
    for(int i=0;b>=l;)
    {
        l=(l*3);
        b=(b*2);
        count++;
    }
    cout<<count;
    return 0;
}