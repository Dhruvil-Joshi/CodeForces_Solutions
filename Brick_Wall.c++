#include<bits/stdc++.h>
using namespace std;
 
void Brick_Wall()
{
    long double len;
    cin>>len;
    for(long long int x=0;x<len;x++)
    {
        long long int n,m;
        cin>>n>>m;
        if(m%2==0)
        cout<<n*(m/2)<<endl;
        else
        cout<<n*((m-1)/2)<<endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Brick_Wall();
    return 0;
}