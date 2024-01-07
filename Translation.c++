#include <iostream>
using namespace std;
int main() {
    string s1,s2;
    int count=0;
    cin>>s1;
    cin>>s2;
    if(s1.size()==s2.size())
    {
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]==s2[(s2.size())-i-1])
            {
                count++;
            }
        }
        if(count==s1.size())
        {
            cout<<"YES";
        }
        else
        {
            cout<<"NO";
        }
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}