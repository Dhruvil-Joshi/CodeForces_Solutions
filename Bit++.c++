#include <iostream>
using namespace std;
int main() {
    int n,count=0;
    string s[150];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        if(s[i]=="++X"||s[i]=="X++")
        {
            count++;
        }
        if(s[i]=="--X"||s[i]=="X--")
        {
            count--;
        }
    }
    cout<<count;
    return 0;
}