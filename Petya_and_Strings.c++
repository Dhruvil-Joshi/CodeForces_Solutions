#include <iostream>
using namespace std;
int main() 
{
    string s1,s2;
    char temp1,temp2;
    cin>>s1;
    cin>>s2;
    for(int i=0;i<s1.size();i++)
    {
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
    }
    if(s1==s2)
    {
        cout<<"0";
    }
    else if(s1<s2)
    {
        cout<<"-1";
    }
    else if(s1>s2)
    {
        cout<<"1";
    }
    return 0;
}