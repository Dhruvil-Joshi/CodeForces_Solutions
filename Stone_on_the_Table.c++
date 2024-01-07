#include <iostream>
using namespace std;
int main() {
    int a=0,n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            a++;
        }
    }
    cout<<a;
    return 0;
}