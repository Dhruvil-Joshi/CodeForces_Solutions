#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    int k=0;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]=='H')||(s[i]=='Q')||(s[i]=='9'))
    {
        k++;
    }
    
    }
    if(k!=0)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}