#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        s[i]=tolower(s[i]);
    }
    for(int i=0;i<(n-1);i++)
    {
        for(int j=i+1;j<n;j++)
        {
            char temp;
            if(s[i]>s[j])
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;   
            }
        }
    }
    for(int i=0;i<(n-1);i++)
    {
        if(s[i]!=s[i+1])
        {
            cnt++;
        }
    } 
    
    cnt=cnt+1;
    if(cnt==26)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
