#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='a')
        {
            count++;
        }
    }
    int extra_letters=s.size()-count;
    while(count<=extra_letters)
    {
        extra_letters--;
    }
    int substring=extra_letters+count;
    cout<<substring;
    return 0;
}