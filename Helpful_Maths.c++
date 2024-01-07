#include <iostream>
using namespace std;
int main() {
    string s;
    cin>>s;
    for(int i=0;i<s.size()-1;)
    {
        for(int j=i+2;j<s.size();)
        {
            if(s[i]>=s[j])
            {
                if((i%2)==0)
                {
                    if(j%2==0)
                    {
                         char temp;
                         temp=s[i];
                         s[i]=s[j];
                         s[j]=temp;
                     }
                }
                
            }
            j=j+2;
        }
        i=i+2;
    }
    cout<<s;
    return 0;
}