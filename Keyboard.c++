#include<bits/stdc++.h>
using namespace std;
void keyboard(char way,string s)
{
    string s1="qwertyuiop{";
    string s2="asdfghjkl;";
    string s3="zxcvbnm,./";
    if(way=='R')
    {
        for(int i=0;i<s.size();i++)
        {
            if(s1.find(s[i])!=std::string::npos)
            {
                cout<<s1[s1.find(s[i])-1];
            }
            else if(s2.find(s[i])!=std::string::npos)
            {
                cout<<s2[s2.find(s[i])-1];
            }
            else
            {
                cout<<s3[s3.find(s[i])-1];
            }
        }
    }
    else
    {
        for(int i=0;i<s.size();i++)
        {
            if(s1.find(s[i])!=std::string::npos)
            {
                cout<<s1[s1.find(s[i])+1];
            }
            else if(s2.find(s[i])!=std::string::npos)
            {
                cout<<s2[s2.find(s[i])+1];
            }
            else
            {
                cout<<s3[s3.find(s[i])+1];
            }
        }
    }
}
int main()
{
    char way;
    cin>>way;
    string s;
    cin>>s;
    keyboard(way,s);
    return 0;
}