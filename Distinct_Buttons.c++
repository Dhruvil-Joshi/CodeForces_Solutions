#include <bits/stdc++.h>
using namespace std;
void controller()
{
    long long int loop;
    cin >> loop;
    for (long long int i = 0; i < loop; i++)
    {
        int n;
        cin>>n;
        int U=0,D=0,L=0,R=0,add=0;
        for(int x=0;x<n;x++)
        {
           int a,b;
           cin>>a>>b;
        //   cout<<a<<" "<<b<<endl;
           if(add!=4)
           {
                if(a>U && U==0)
                    {
                        U=1;
                        add+=1;
                    }
               else if(a<D && D==0)
                    {
                        D=1;
                        add+=1;
                    }
               if(b>R && R==0)
                    {
                        R=1;
                        add+=1;
                    }
               else if(b<L && L==0)
                   {
                        L=1;
                        add+=1;
                    }   
           }
        }
        if(add==4)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}
int main()
{
    controller();
    return 0;
}