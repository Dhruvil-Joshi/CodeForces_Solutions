#include <iostream>
using namespace std;
int main()
{
    int n,t;
    string s;
    cin>>n>>t;
    cin>>s;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<(s.size())-1;)
       {
         
         if(s[j]=='B'&&s[j+1]=='G') //For every element except last 2
            {
                char temp;
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
                j=j+2;
                continue;
            }
            j++;
       }
    }
    cout<<s;
    return 0;
}