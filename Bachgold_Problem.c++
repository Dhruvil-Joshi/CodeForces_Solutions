#include<bits/stdc++.h>
using namespace std;
 
void Bachgold_Problem()
{
    int n;
    cin>>n;
    int val = n/2;
    cout<<val<<endl;
    if(n%2==0)
    {
        for(int i=0;i<val;i++)
        {
            cout<<2<<" ";
        }
        cout<<endl;
    }
    else
    {
        for(int i=0;i<val-1;i++)
        {
            cout<<2<<" ";
        }
        cout<<3<<endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Bachgold_Problem();
    return 0;
}