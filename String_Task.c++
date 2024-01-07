#include <iostream>
using namespace std;
int main() 
{
    string j;
    cin>>j;
    char temp;
    int i;
    
    for(int i=0;i<j.size();i++)
    {
        temp=tolower(j[i]);
        if(temp=='a'||temp=='u'||temp=='i'||temp=='e'||temp=='o'||temp=='y')
        {
            continue;
        }
        else
        {
            cout<<"."<<temp;
        }
    }
    return 0;
}