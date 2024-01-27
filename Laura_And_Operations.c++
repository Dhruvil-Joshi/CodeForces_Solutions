#include<bits/stdc++.h>
using namespace std;
 
void Laura_And_Operations()
{
    long long int len;
    cin>>len;
    for(long long int i=0;i<len;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((b-c)%2==0)
        cout<<1<<" ";
        else
        cout<<0<<" ";
        if((a-c)%2==0)
        cout<<1<<" ";
        else
        cout<<0<<" ";
        if((b-a)%2==0)
        cout<<1<<endl;
        else
        cout<<0<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Laura_And_Operations();
    return 0;
}