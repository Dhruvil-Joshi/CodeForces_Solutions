#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        if(a%b==0)
        {
            cout<<0<<endl;
        }
        else
        {
            int temp=a/b;
            temp=(temp+1)*b;
            cout<<temp-a<<endl;
        }
    }
    return 0;
}