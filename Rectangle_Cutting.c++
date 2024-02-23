#include<bits/stdc++.h>
using namespace std;
 
void Rectangle_Cutiing()
{
    long long int len;
    cin>>len;
    for(int x=0;x<len;x++)
    {
       long long int n,m;
       cin>>n>>m;
       long long int min,max;
       if(n<m)
       {
           min=n;
           max=m;
       }
       else
       {
           min=m;
           max=n;
       }
       if(min%2!=0 && (max%2!=0 || max/2==min))
       cout<<"NO"<<endl;
       else 
       cout<<"YES"<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Rectangle_Cutiing();
    return 0;
}