#include <iostream>
using namespace std;
int main() 
{
    int c=0;
    string s;
    cin>>s;
    if(s.size()<=6)
    {
        cout<<"NO";
        return 0;
    }
    if(s.size()>6){
    for(int i=0;i<s.size();i++)
    {
        if((s[i]=='1')&&(s[i+1]=='1')&&(s[i+2]=='1')&&(s[i+3]=='1')&&(s[i+4]=='1')&&(s[i+5]=='1')&&(s[i+6]=='1'))
        {
            c++;
            break;
        }
        if((s[i]==s[i+1])&&(s[i+1]==s[i+2])&&(s[i+2]==s[i+3])&&(s[i+3]==s[i+4])&&(s[i+4]==s[i+5])&&(s[i+5]==s[i+6])&&(s[i+6]=='0'))
        {
            c++;
            break;
        }
    }
    }
    if(c!=0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}