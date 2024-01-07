#include<bits/stdc++.h>
using namespace std;
 
void Imbalance()
{
    int loop;
    cin>>loop;
    for(int j=0;j<loop;j++)
    {
       int n,o=0;
       cin>>n;
       for(int i=0;i<n;i++)
       {
           char temp;
           cin>>temp;
           if(temp=='1')
           o++;
       }
       if(o==n)
       cout<<"NO"<<endl;
       else
       cout<<"YES"<<endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Imbalance();
    return 0;
}