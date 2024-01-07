#include <iostream>
using namespace std;
int main() {
    string n;
    int x=0,ans;
    cin>>n;
    for(int i=0;i<n.size();i++)
    {
        if(n[i]!='4'&&n[i]!='7')
        {
            x++;
        }
    }
    ans=n.size()-x;
    if(ans==4||ans==7)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}