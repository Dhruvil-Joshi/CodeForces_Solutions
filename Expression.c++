#include <iostream>
using namespace std;
int main() {
    int a,b,c,c1,c2,c3,c4,c5;
    cin>>a;
    cin>>b;
    cin>>c;
    c1=a+(b*c);
    c2=a*(b+c);
    c3=a*b*c;
    c4=(a+b)*c;
    c5=a+b+c;
    if(c4>=c3&&c4>=c2&&c4>=c1&&c4>=c5)
    {
        cout<<c4;
    }
    else if(c5>=c3&&c5>=c2&&c5>=c1&&c5>=c4)
    {
        cout<<c5;
    }
    else if(c3>=c5&&c3>=c2&&c3>=c1&&c3>=c4)
    {
        cout<<c3;
    }
    else if(c2>=c3&&c2>=c4&&c2>=c1&&c2>=c5)
    {
        cout<<c2;
    }
    else 
    {
        cout<<c1;
    }
    return 0;
}