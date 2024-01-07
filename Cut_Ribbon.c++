#include<bits/stdc++.h>
using namespace std;
void cutribbon(int n,int a,int b,int c)
{
    int ans=0;
    for(int x=0;x<=4000;x++)
    {
        for(int y=0;y<=4000;y++)
        {
            int zc=n-((x*a)+(y*b));
            if(zc<0)
                break;
            double z = (zc/(double)c);
            if(z==(int)z)
                ans=max(ans,(int)z+x+y);
        }
    }
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    cutribbon(n,a,b,c);
    return 0;
}