#include <iostream>
using namespace std;
class St
{
    public:
    string s;
    void getdata()
    {
        cin>>s;
    }
    void putdata()
    {
        int n=s.size();
        if(n<=10)
        {
            cout<<s;
        }
        else
        cout<<s[0]<<s.size()-2<<s[n-1];
        cout<<"\n";
    }
}a[200];
int main() {
    int b;
    cin>>b;
    for(int i=0;i<b;i++)
    {
        a[i].getdata();
    }
    for(int i=0;i<b;i++)
    {
        a[i].putdata();
    }
    return 0;
}