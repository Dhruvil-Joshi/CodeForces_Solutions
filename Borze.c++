#include <iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();)
    {
        if(s[i]=='.')
        {
            cout<<0;
            i++;
        }
        else if(s[i]=='-')
        {
            if(s[i+1]=='.')
            {
                cout<<1;
                i=i+2;
            }
            else 
            {
                cout<<2;
            i=i+2;
            }
        }
    }
    return 0;
}