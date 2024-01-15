#include<bits/stdc++.h>
using namespace std;
 
void Square()
{
    long long int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long int x,y,fl=0,fb=0,temp=-10000;
        for(int j=0;j<4;j++){
            cin>>x>>y;
            if(temp==-10000)
            {
                temp=x;
                fl=y;
            }
            else if(x==temp)
            {
                fb=y;
                long long int ans;
               if(fb>fl)
               ans=fb-fl;
               else
               ans=fl-fb;
               cout<<ans*ans<<endl;
            }
        }
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Square();
    return 0;
}