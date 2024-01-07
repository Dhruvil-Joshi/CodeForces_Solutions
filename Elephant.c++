#include <iostream>
using namespace std;
int main() 
{
    int n1=0,n2=0,n3=0,n4=0,n5=0,target,answer=0;
    cin>>target;
    if((target/5)>0)
    {
        n5=(target/5);
    }
    target=target-(n5*5);
    if((target/4)>0)
    {
        n4=(target/4);
    }
    target=target-(n4*4);
    if((target/3)>0)
    {
        n3=(target/3);
    }
    target=target-(n3*3);
    if((target/2)>0)
    {
        n2=(target/2);
    }
    target=target-(n2*2);
    if((target/1)>0)
    {
        n1=(target/1);
    }
    target=target-(n1*1);
    answer=n1+n2+n3+n4+n5;
    cout<<answer;
    return 0;
}
