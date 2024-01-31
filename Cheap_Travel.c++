#include<bits/stdc++.h>
using namespace std;
 
void CheapTravel()
{
    double n,m,a,b;
    cin>>n>>m>>a>>b;
    if(m>n)
    {
        int value1=b;
        int value2=n*a;
        cout<<min(value1,value2)<<endl;
    }
    else
    {
        double temp=n/m;
        int temporary=int(temp);
        int value1=b*temporary+((n-(temporary*m))*a);
        int value2=n*a;
        int value3=ceil(temp);
        value3=value3*b;
        cout<<min(value1,min(value2,value3))<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    CheapTravel();
    return 0;
}